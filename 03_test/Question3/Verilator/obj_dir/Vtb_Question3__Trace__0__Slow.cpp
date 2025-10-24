// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question3__Syms.h"


VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_Question3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+125,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"A_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"B_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"Cin_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"Sum_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"Cout_tb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pass_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2,0,"fail_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"run_test__Vstatic__idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+4,0,"run_test__Vstatic__tv_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"run_test__Vstatic__tv_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"run_test__Vstatic__tv_cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+7,0,"run_test__Vstatic__expected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+9,0,"run_test__Vstatic__got",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+125,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+129,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"A_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"B_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"Cin_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"Pblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"Gblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"Cblk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+20,0,"Sum_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"Cout_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BLK[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BLK[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u4", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+69,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+22,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+76,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+83,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+32,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+88,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+34,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+90,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+37,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+95,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+97,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+98,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+104,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+16,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+111,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+112,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+54,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_sub__TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+118,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+57,0,"Cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"Gblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"Pblk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+18,0,"Cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+59,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"and4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"or3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_init_top(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_init_top\n"); );
    // Body
    Vtb_Question3___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_Question3___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question3___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question3___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_Question3___024root__trace_register(Vtb_Question3___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_Question3___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_Question3___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_Question3___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_Question3___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_const_0\n"); );
    // Init
    Vtb_Question3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question3___024root*>(voidSelf);
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_full_0_sub_0(Vtb_Question3___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Question3___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_full_0\n"); );
    // Init
    Vtb_Question3___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question3___024root*>(voidSelf);
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Question3___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Question3___024root__trace_full_0_sub_0(Vtb_Question3___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question3___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_Question3__DOT__pass_count),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_Question3__DOT__fail_count),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_Question3__DOT__run_test__Vstatic__idx),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_a),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_b),32);
    bufp->fullBit(oldp+6,(vlSelf->tb_Question3__DOT__run_test__Vstatic__tv_cin));
    bufp->fullQData(oldp+7,(vlSelf->tb_Question3__DOT__run_test__Vstatic__expected),33);
    bufp->fullQData(oldp+9,(vlSelf->tb_Question3__DOT__run_test__Vstatic__got),33);
    bufp->fullBit(oldp+11,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Pblk) 
                               & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk)))));
    bufp->fullBit(oldp+12,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 1U)))));
    bufp->fullBit(oldp+13,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 2U)))));
    bufp->fullBit(oldp+14,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 3U)))));
    bufp->fullBit(oldp+15,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 4U)))));
    bufp->fullBit(oldp+16,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 5U)))));
    bufp->fullBit(oldp+17,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 6U)))));
    bufp->fullBit(oldp+18,(((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Gblk) 
                            | ((IData)(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Pblk) 
                               & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 7U)))));
    bufp->fullSData(oldp+19,(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk),9);
    bufp->fullIData(oldp+20,(vlSelf->tb_Question3__DOT__DUT__DOT__Sum_c),32);
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 8U))));
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk))));
    bufp->fullCData(oldp+23,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+25,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+26,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 1U))));
    bufp->fullCData(oldp+28,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 2U))));
    bufp->fullCData(oldp+33,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+34,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 3U))));
    bufp->fullCData(oldp+38,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+39,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+40,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+41,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 4U))));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 5U))));
    bufp->fullCData(oldp+48,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 6U))));
    bufp->fullCData(oldp+53,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+54,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__c3));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSelf->tb_Question3__DOT__DUT__DOT__Cblk) 
                                  >> 7U))));
    bufp->fullCData(oldp+58,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.S),4);
    bufp->fullBit(oldp+59,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c1));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c2));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__c3));
    bufp->fullIData(oldp+62,(vlSelf->tb_Question3__DOT__Sum_tb),32);
    bufp->fullBit(oldp+63,(vlSelf->tb_Question3__DOT__Cout_tb));
    bufp->fullIData(oldp+64,(vlSelf->tb_Question3__DOT__DUT__DOT__A_r),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_Question3__DOT__DUT__DOT__B_r),32);
    bufp->fullBit(oldp+66,(vlSelf->tb_Question3__DOT__DUT__DOT__Cin_r));
    bufp->fullCData(oldp+67,(vlSelf->tb_Question3__DOT__DUT__DOT__Pblk),8);
    bufp->fullCData(oldp+68,(vlSelf->tb_Question3__DOT__DUT__DOT__Gblk),8);
    bufp->fullCData(oldp+69,((0xfU & vlSelf->tb_Question3__DOT__DUT__DOT__A_r)),4);
    bufp->fullCData(oldp+70,((0xfU & vlSelf->tb_Question3__DOT__DUT__DOT__B_r)),4);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+73,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+75,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__0__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+76,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                      >> 4U))),4);
    bufp->fullCData(oldp+77,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                      >> 4U))),4);
    bufp->fullBit(oldp+78,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+80,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__1__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+83,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                      >> 8U))),4);
    bufp->fullCData(oldp+84,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                      >> 8U))),4);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+87,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__2__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+90,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+91,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                      >> 0xcU))),4);
    bufp->fullBit(oldp+92,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+94,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__3__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+97,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+98,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                      >> 0x10U))),4);
    bufp->fullBit(oldp+99,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+101,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+103,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__4__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+104,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+105,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+106,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+108,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+110,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__5__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+111,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+112,((0xfU & (vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+115,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__6__KET____DOT__u4.__PVT__or3));
    bufp->fullCData(oldp+118,((vlSelf->tb_Question3__DOT__DUT__DOT__A_r 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+119,((vlSelf->tb_Question3__DOT__DUT__DOT__B_r 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Gblk));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.Pblk));
    bufp->fullCData(oldp+122,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__p),4);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__g),4);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__tb_Question3__DOT__DUT__DOT__BLK__BRA__7__KET____DOT__u4.__PVT__or3));
    bufp->fullBit(oldp+125,(vlSelf->tb_Question3__DOT__clk));
    bufp->fullBit(oldp+126,(vlSelf->tb_Question3__DOT__rst_n));
    bufp->fullIData(oldp+127,(vlSelf->tb_Question3__DOT__A_tb),32);
    bufp->fullIData(oldp+128,(vlSelf->tb_Question3__DOT__B_tb),32);
    bufp->fullBit(oldp+129,(vlSelf->tb_Question3__DOT__Cin_tb));
}
