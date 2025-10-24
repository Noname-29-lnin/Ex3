// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Question3.h for the primary calling header

#include "Vtb_Question3__pch.h"
#include "Vtb_Question3__Syms.h"
#include "Vtb_Question3_cla_4bit.h"

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
               ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk))) 
         ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ (IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
               ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
               ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
               ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
               ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    }
    if ((1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
               ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
               ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
               ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r));
    }
    if ((8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
               ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r));
    }
    vlSelf->__PVT__g = (0xfU & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    vlSelf->__PVT__p = (0xfU & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 1U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 1U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 1U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 1U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 1U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 1U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 1U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 5U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 6U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 4U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 7U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 4U)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 4U));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 4U));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 2U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 2U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 2U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 2U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 2U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 2U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 2U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 8U) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 9U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xaU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 8U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xbU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 8U)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 8U));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 8U));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 3U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 3U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 3U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 3U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 3U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 3U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 3U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xcU) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xdU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                            >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xeU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                            >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0xcU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0xfU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                            >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0xcU)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0xcU));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0xcU));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 4U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 4U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 4U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 4U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 4U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 4U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 4U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x10U) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x11U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x12U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x10U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x13U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x10U)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x10U));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x10U));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 5U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 5U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 5U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 5U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 5U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 5U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 5U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x14U) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x15U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x16U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x14U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x17U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x14U)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x14U));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x14U));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 6U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 6U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 6U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 6U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 6U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 6U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 6U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x18U) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x19U) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x1aU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x18U)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x1bU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x18U)));
    }
    vlSelf->__PVT__g = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x18U));
    vlSelf->__PVT__p = (0xfU & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                 ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                                >> 0x18U));
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___act_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_2;
    __VdfgRegularize_hf0430a2d_0_2 = 0;
    // Body
    if ((1U & (((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                >> 7U) ^ (IData)(vlSelf->__Vtogcov__Cin)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->__Vtogcov__Cin = (1U & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                        >> 7U));
    }
    if ((((IData)(vlSelf->Gblk) | ((IData)(vlSelf->Pblk) 
                                   & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                      >> 7U))) ^ (IData)(vlSelf->__Vtogcov__Cout))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->__Vtogcov__Cout = ((IData)(vlSelf->Gblk) 
                                   | ((IData)(vlSelf->Pblk) 
                                      & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                         >> 7U)));
    }
    vlSelf->__PVT__c2 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 1U) | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                          | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6) 
                                             & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                >> 7U)))));
    __VdfgRegularize_hf0430a2d_0_2 = (1U & ((IData)(vlSelf->__PVT__p) 
                                            & ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                               >> 7U)));
    if (((IData)(vlSelf->__PVT__c2) ^ (IData)(vlSelf->__Vtogcov__c2))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->__Vtogcov__c2 = vlSelf->__PVT__c2;
    }
    vlSelf->__PVT__c1 = (1U & ((IData)(vlSelf->__PVT__g) 
                               | (IData)(__VdfgRegularize_hf0430a2d_0_2)));
    vlSelf->__PVT__c3 = (1U & (((IData)(vlSelf->__PVT__g) 
                                >> 2U) | ((((IData)(vlSelf->__PVT__g) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->__PVT__p) 
                                              >> 2U)) 
                                          | (((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_5) 
                                              & ((IData)(vlSelf->__PVT__p) 
                                                 >> 2U)) 
                                             | ((IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9) 
                                                & (IData)(__VdfgRegularize_hf0430a2d_0_2))))));
    if (((IData)(vlSelf->__PVT__c1) ^ (IData)(vlSelf->__Vtogcov__c1))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->__Vtogcov__c1 = vlSelf->__PVT__c1;
    }
    if (((IData)(vlSelf->__PVT__c3) ^ (IData)(vlSelf->__Vtogcov__c3))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->__Vtogcov__c3 = vlSelf->__PVT__c3;
    }
    vlSelf->S = (((IData)((((IData)(vlSelf->__PVT__p) 
                            >> 3U) ^ (IData)(vlSelf->__PVT__c3))) 
                  << 3U) | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__p)) 
                                   ^ ((IData)(vlSelf->__PVT__c2) 
                                      << 2U))) | ((2U 
                                                   & ((0xfffffffeU 
                                                       & (IData)(vlSelf->__PVT__p)) 
                                                      ^ 
                                                      ((IData)(vlSelf->__PVT__c1) 
                                                       << 1U))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->__PVT__p) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__Cblk) 
                                                         >> 7U))))));
    if ((1U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->__Vtogcov__S = ((0xeU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (1U & (IData)(vlSelf->S)));
    }
    if ((2U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->__Vtogcov__S = ((0xdU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (2U & (IData)(vlSelf->S)));
    }
    if ((4U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->__Vtogcov__S = ((0xbU & (IData)(vlSelf->__Vtogcov__S)) 
                                | (4U & (IData)(vlSelf->S)));
    }
    if ((8U & ((IData)(vlSelf->S) ^ (IData)(vlSelf->__Vtogcov__S)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->__Vtogcov__S = ((7U & (IData)(vlSelf->__Vtogcov__S)) 
                                | (8U & (IData)(vlSelf->S)));
    }
}

VL_INLINE_OPT void Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3_cla_4bit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_Question3_cla_4bit___nba_sequent__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0\n"); );
    // Init
    CData/*0:0*/ __VdfgRegularize_hf0430a2d_0_11;
    __VdfgRegularize_hf0430a2d_0_11 = 0;
    // Body
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x1cU) ^ (IData)(vlSelf->__Vtogcov__B)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->__Vtogcov__B = ((0xeU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x1cU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->__Vtogcov__B = ((0xdU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x1cU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->__Vtogcov__B = ((0xbU & (IData)(vlSelf->__Vtogcov__B)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x1cU)));
    }
    if (((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
          >> 0x1fU) ^ ((IData)(vlSelf->__Vtogcov__B) 
                       >> 3U))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->__Vtogcov__B = ((7U & (IData)(vlSelf->__Vtogcov__B)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r 
                                         >> 0x1cU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x1cU) ^ (IData)(vlSelf->__Vtogcov__A)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->__Vtogcov__A = ((0xeU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (1U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x1cU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x1dU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 1U)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->__Vtogcov__A = ((0xdU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (2U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x1cU)));
    }
    if ((1U & ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                >> 0x1eU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                             >> 2U)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->__Vtogcov__A = ((0xbU & (IData)(vlSelf->__Vtogcov__A)) 
                                | (4U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x1cU)));
    }
    if (((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
          >> 0x1fU) ^ ((IData)(vlSelf->__Vtogcov__A) 
                       >> 3U))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->__Vtogcov__A = ((7U & (IData)(vlSelf->__Vtogcov__A)) 
                                | (8U & (vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                                         >> 0x1cU)));
    }
    vlSelf->__PVT__g = ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                         & vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                        >> 0x1cU);
    vlSelf->__PVT__p = ((vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__A_r 
                         ^ vlSymsp->TOP.tb_Question3__DOT__DUT__DOT__B_r) 
                        >> 0x1cU);
    if ((1U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->__Vtogcov__g = ((0xeU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (1U & (IData)(vlSelf->__PVT__g)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->__Vtogcov__g = ((0xdU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (2U & (IData)(vlSelf->__PVT__g)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->__Vtogcov__g = ((0xbU & (IData)(vlSelf->__Vtogcov__g)) 
                                | (4U & (IData)(vlSelf->__PVT__g)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__g) ^ (IData)(vlSelf->__Vtogcov__g)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->__Vtogcov__g = ((7U & (IData)(vlSelf->__Vtogcov__g)) 
                                | (8U & (IData)(vlSelf->__PVT__g)));
    }
    if ((1U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->__Vtogcov__p = ((0xeU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (1U & (IData)(vlSelf->__PVT__p)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->__Vtogcov__p = ((0xdU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (2U & (IData)(vlSelf->__PVT__p)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->__Vtogcov__p = ((0xbU & (IData)(vlSelf->__Vtogcov__p)) 
                                | (4U & (IData)(vlSelf->__PVT__p)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__p) ^ (IData)(vlSelf->__Vtogcov__p)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->__Vtogcov__p = ((7U & (IData)(vlSelf->__Vtogcov__p)) 
                                | (8U & (IData)(vlSelf->__PVT__p)));
    }
    vlSelf->__VdfgRegularize_hf0430a2d_0_5 = (1U & 
                                              ((IData)(vlSelf->__PVT__g) 
                                               & ((IData)(vlSelf->__PVT__p) 
                                                  >> 1U)));
    vlSelf->__VdfgRegularize_hf0430a2d_0_6 = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__PVT__p))));
    vlSelf->__VdfgRegularize_hf0430a2d_0_9 = (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__PVT__p))));
    __VdfgRegularize_hf0430a2d_0_11 = (IData)((0xcU 
                                               == (0xcU 
                                                   & (IData)(vlSelf->__PVT__p))));
    vlSelf->Pblk = ((IData)(__VdfgRegularize_hf0430a2d_0_11) 
                    & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_6));
    vlSelf->__PVT__or3 = (1U & ((((IData)(vlSelf->__PVT__g) 
                                  >> 2U) & ((IData)(vlSelf->__PVT__p) 
                                            >> 3U)) 
                                | ((((IData)(vlSelf->__PVT__g) 
                                     >> 1U) & (IData)(__VdfgRegularize_hf0430a2d_0_11)) 
                                   | ((IData)(vlSelf->__PVT__g) 
                                      & (((IData)(vlSelf->__PVT__p) 
                                          >> 3U) & (IData)(vlSelf->__VdfgRegularize_hf0430a2d_0_9))))));
    if (((IData)(vlSelf->Pblk) ^ (IData)(vlSelf->__Vtogcov__Pblk))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->__Vtogcov__Pblk = vlSelf->Pblk;
    }
    if (((IData)(vlSelf->__PVT__or3) ^ (IData)(vlSelf->__Vtogcov__or3))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->__Vtogcov__or3 = vlSelf->__PVT__or3;
    }
    vlSelf->Gblk = (IData)((((IData)(vlSelf->__PVT__g) 
                             >> 3U) | (IData)(vlSelf->__PVT__or3)));
    if (((IData)(vlSelf->Gblk) ^ (IData)(vlSelf->__Vtogcov__Gblk))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->__Vtogcov__Gblk = vlSelf->Gblk;
    }
}
