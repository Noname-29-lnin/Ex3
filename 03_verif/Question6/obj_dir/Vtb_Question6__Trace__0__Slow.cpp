// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_Question6__Syms.h"


VL_ATTR_COLD void Vtb_Question6___024root__trace_init_sub__TOP__0(Vtb_Question6___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_Question6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+568,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("o_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+560+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+10,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+568,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("o_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+560+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+105,0,"w_o_sorted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"w_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("t_o_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+11,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+105,0,"o_sorted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("w_i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_0_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+143,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+145,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+569,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+23,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+34,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+36,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+37,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+151,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+151,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+571,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+46,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+44,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+38,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+55,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+56,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+58,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+153,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+144,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+153,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+158,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+159,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+156,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+167,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+160,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+174,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+175,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+172,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+176,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+177,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+178,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+178,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+184,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+181,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+189,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+190,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+187,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+191,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+192,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+185,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+179,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+199,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+200,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+197,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+201,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+195,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+203,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+147,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+203,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+208,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+209,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+214,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+215,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+212,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+216,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+217,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+210,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+204,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+224,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+225,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+222,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+226,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+227,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+220,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+61,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+60,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+573,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+67,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+63,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+240,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+240,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+87,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+575,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+92,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+90,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+94,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+96,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+84,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+102,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+99,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+97,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+242,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+242,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+248,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+245,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+254,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+251,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+255,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+256,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+249,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+243,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+263,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+264,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+261,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+259,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+267,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+267,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+273,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+270,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+278,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+276,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+274,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+282,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+268,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+289,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+286,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+290,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+291,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+284,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+292,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+292,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+297,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+298,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+295,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+301,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+305,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+306,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+299,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+307,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+293,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+313,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+314,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+311,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+315,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+316,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+309,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_8_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+140,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"i_data_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"i_data_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+142,0,"i_data_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"i_data_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"o_data_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"o_data_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"o_data_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"o_data_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"w_data_max_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"w_data_max_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"w_data_min_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"w_data_min_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"w_data_max_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"w_data_min_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"w_data_max_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"w_data_min_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+335,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+335,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+341,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+338,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+346,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+347,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+344,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+348,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+342,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+350,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+351,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+336,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+356,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+357,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+354,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+352,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+360,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+360,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+365,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+366,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+363,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+372,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+369,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+374,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+367,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+368,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+375,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+376,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+361,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+382,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+379,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+377,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+385,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+385,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+391,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+388,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+396,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+397,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+394,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+398,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+399,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+392,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+400,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+401,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+386,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+406,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+404,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+408,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+409,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+402,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+410,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+410,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+416,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+413,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+419,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+421,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+422,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+419,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+420,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+423,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+424,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+417,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+425,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+426,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+411,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+431,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+432,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+429,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+427,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+435,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+435,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+441,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+438,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+446,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+447,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+444,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+448,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+449,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+442,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+451,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+436,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+456,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+457,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+454,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+459,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+452,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+460,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+460,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+465,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+466,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+463,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+471,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+472,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+469,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+473,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+474,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+467,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+475,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+476,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+461,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+481,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+482,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+479,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+484,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+477,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+478,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+485,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+485,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+486,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+490,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+491,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+488,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+497,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+494,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+498,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+499,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+492,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+493,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+500,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+501,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+486,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+487,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+506,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+507,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+504,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+508,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+509,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+502,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+510,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+331,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+510,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+515,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+516,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+513,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+521,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+522,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+519,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+523,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+524,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+517,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+526,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+511,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+512,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+531,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+532,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+529,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+533,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+534,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+527,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+577,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+535,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+535,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+540,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+541,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+538,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+544,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+546,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+547,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+544,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+548,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+549,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+542,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+550,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+551,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+536,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+556,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+557,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+554,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+558,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+552,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_init_top(Vtb_Question6___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_init_top\n"); );
    // Body
    Vtb_Question6___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_Question6___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question6___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_Question6___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_Question6___024root__trace_register(Vtb_Question6___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_Question6___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_Question6___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_Question6___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_Question6___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_const_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Question6___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_const_0\n"); );
    // Init
    Vtb_Question6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question6___024root*>(voidSelf);
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Question6___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_const_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+577,(1U),32);
    bufp->fullIData(oldp+578,(8U),32);
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_full_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_Question6___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_full_0\n"); );
    // Init
    Vtb_Question6___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_Question6___024root*>(voidSelf);
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_Question6___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_Question6___024root__trace_full_0_sub_0(Vtb_Question6___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Question6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Question6___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_Question6__DOT__i_rst_n));
    bufp->fullCData(oldp+2,(vlSelf->tb_Question6__DOT__i_data[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->tb_Question6__DOT__i_data[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->tb_Question6__DOT__i_data[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_Question6__DOT__i_data[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_Question6__DOT__i_data[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_Question6__DOT__i_data[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_Question6__DOT__i_data[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->tb_Question6__DOT__i_data[7]),8);
    bufp->fullIData(oldp+10,(vlSelf->tb_Question6__DOT__k),32);
    bufp->fullQData(oldp+11,((((QData)((IData)(vlSelf->tb_Question6__DOT__i_data
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
    bufp->fullCData(oldp+13,(vlSelf->tb_Question6__DOT__i_data
                             [0U]),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_Question6__DOT__i_data
                             [1U]),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_Question6__DOT__i_data
                             [2U]),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_Question6__DOT__i_data
                             [3U]),8);
    bufp->fullBit(oldp+17,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [1U] >> 2U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 3U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [1U] >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [0U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [1U]) 
                                                     >> 2U))))) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [0U] >> 1U)) 
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
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [0U] 
                                                  >> 1U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [1U] 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+18,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_Question6__DOT__i_data
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
    bufp->fullCData(oldp+19,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [0U] >> 4U))),4);
    bufp->fullCData(oldp+20,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [1U] >> 4U))),4);
    bufp->fullBit(oldp+21,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [1U] >> 4U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [0U] >> 5U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [1U] >> 5U)))))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [1U]) 
                                               >> 4U))))))));
    bufp->fullBit(oldp+23,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                           [1U] >> 7U)))))));
    bufp->fullCData(oldp+24,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [0U] >> 6U))),2);
    bufp->fullCData(oldp+25,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [1U] >> 6U))),2);
    bufp->fullCData(oldp+26,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [0U] >> 4U))),2);
    bufp->fullCData(oldp+27,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [1U] >> 4U))),2);
    bufp->fullCData(oldp+28,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [0U])),4);
    bufp->fullCData(oldp+29,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [1U])),4);
    bufp->fullBit(oldp+30,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                       [0U] >> 1U)) 
                                   & ((~ vlSelf->tb_Question6__DOT__i_data
                                       [0U]) & vlSelf->tb_Question6__DOT__i_data
                                      [1U])) | (((~ 
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
    bufp->fullBit(oldp+31,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->tb_Question6__DOT__i_data
                                               [0U] 
                                               ^ vlSelf->tb_Question6__DOT__i_data
                                               [1U]))))))));
    bufp->fullBit(oldp+32,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [1U] >> 2U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [0U] >> 3U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [1U] >> 3U)))))));
    bufp->fullBit(oldp+33,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [0U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [1U]) 
                                               >> 2U))))))));
    bufp->fullCData(oldp+34,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [0U] >> 2U))),2);
    bufp->fullCData(oldp+35,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [1U] >> 2U))),2);
    bufp->fullCData(oldp+36,((3U & vlSelf->tb_Question6__DOT__i_data
                              [0U])),2);
    bufp->fullCData(oldp+37,((3U & vlSelf->tb_Question6__DOT__i_data
                              [1U])),2);
    bufp->fullBit(oldp+38,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [3U] >> 2U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 3U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [3U] >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [2U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [3U]) 
                                                     >> 2U))))) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [2U] >> 1U)) 
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
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [2U] 
                                                  >> 1U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [3U] 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+39,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_Question6__DOT__i_data
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
    bufp->fullCData(oldp+40,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [2U] >> 4U))),4);
    bufp->fullCData(oldp+41,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [3U] >> 4U))),4);
    bufp->fullBit(oldp+42,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [3U] >> 4U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [2U] >> 5U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [3U] >> 5U)))))));
    bufp->fullBit(oldp+43,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [3U]) 
                                               >> 4U))))))));
    bufp->fullBit(oldp+44,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                           [3U] >> 7U)))))));
    bufp->fullCData(oldp+45,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [2U] >> 6U))),2);
    bufp->fullCData(oldp+46,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [3U] >> 6U))),2);
    bufp->fullCData(oldp+47,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [2U] >> 4U))),2);
    bufp->fullCData(oldp+48,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [3U] >> 4U))),2);
    bufp->fullCData(oldp+49,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [2U])),4);
    bufp->fullCData(oldp+50,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [3U])),4);
    bufp->fullBit(oldp+51,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                       [2U] >> 1U)) 
                                   & ((~ vlSelf->tb_Question6__DOT__i_data
                                       [2U]) & vlSelf->tb_Question6__DOT__i_data
                                      [3U])) | (((~ 
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
    bufp->fullBit(oldp+52,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->tb_Question6__DOT__i_data
                                               [2U] 
                                               ^ vlSelf->tb_Question6__DOT__i_data
                                               [3U]))))))));
    bufp->fullBit(oldp+53,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [3U] >> 2U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [2U] >> 3U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [3U] >> 3U)))))));
    bufp->fullBit(oldp+54,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [2U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [3U]) 
                                               >> 2U))))))));
    bufp->fullCData(oldp+55,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [2U] >> 2U))),2);
    bufp->fullCData(oldp+56,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [3U] >> 2U))),2);
    bufp->fullCData(oldp+57,((3U & vlSelf->tb_Question6__DOT__i_data
                              [2U])),2);
    bufp->fullCData(oldp+58,((3U & vlSelf->tb_Question6__DOT__i_data
                              [3U])),2);
    bufp->fullCData(oldp+59,(vlSelf->tb_Question6__DOT__i_data
                             [4U]),8);
    bufp->fullCData(oldp+60,(vlSelf->tb_Question6__DOT__i_data
                             [5U]),8);
    bufp->fullCData(oldp+61,(vlSelf->tb_Question6__DOT__i_data
                             [6U]),8);
    bufp->fullCData(oldp+62,(vlSelf->tb_Question6__DOT__i_data
                             [7U]),8);
    bufp->fullBit(oldp+63,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [5U] >> 2U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 3U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [5U] >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [4U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [5U]) 
                                                     >> 2U))))) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [4U] >> 1U)) 
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
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [4U] 
                                                  >> 1U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [5U] 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+64,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_Question6__DOT__i_data
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
    bufp->fullCData(oldp+65,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [4U] >> 4U))),4);
    bufp->fullCData(oldp+66,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [5U] >> 4U))),4);
    bufp->fullBit(oldp+67,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [5U] >> 4U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [4U] >> 5U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [5U] >> 5U)))))));
    bufp->fullBit(oldp+68,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [5U]) 
                                               >> 4U))))))));
    bufp->fullBit(oldp+69,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                           [5U] >> 7U)))))));
    bufp->fullCData(oldp+70,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [4U] >> 6U))),2);
    bufp->fullCData(oldp+71,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [5U] >> 6U))),2);
    bufp->fullCData(oldp+72,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [4U] >> 4U))),2);
    bufp->fullCData(oldp+73,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [5U] >> 4U))),2);
    bufp->fullCData(oldp+74,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [4U])),4);
    bufp->fullCData(oldp+75,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [5U])),4);
    bufp->fullBit(oldp+76,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                       [4U] >> 1U)) 
                                   & ((~ vlSelf->tb_Question6__DOT__i_data
                                       [4U]) & vlSelf->tb_Question6__DOT__i_data
                                      [5U])) | (((~ 
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
    bufp->fullBit(oldp+77,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->tb_Question6__DOT__i_data
                                               [4U] 
                                               ^ vlSelf->tb_Question6__DOT__i_data
                                               [5U]))))))));
    bufp->fullBit(oldp+78,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [5U] >> 2U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [4U] >> 3U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [5U] >> 3U)))))));
    bufp->fullBit(oldp+79,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [4U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [5U]) 
                                               >> 2U))))))));
    bufp->fullCData(oldp+80,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [4U] >> 2U))),2);
    bufp->fullCData(oldp+81,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [5U] >> 2U))),2);
    bufp->fullCData(oldp+82,((3U & vlSelf->tb_Question6__DOT__i_data
                              [4U])),2);
    bufp->fullCData(oldp+83,((3U & vlSelf->tb_Question6__DOT__i_data
                              [5U])),2);
    bufp->fullBit(oldp+84,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [7U] >> 2U))) 
                                      | ((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 3U)) 
                                         & (vlSelf->tb_Question6__DOT__i_data
                                            [7U] >> 3U)))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [6U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [7U]) 
                                                     >> 2U))))) 
                                     & (((~ (vlSelf->tb_Question6__DOT__i_data
                                             [6U] >> 1U)) 
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
                                           | ((~ (vlSelf->tb_Question6__DOT__i_data
                                                  [6U] 
                                                  >> 1U)) 
                                              & (vlSelf->tb_Question6__DOT__i_data
                                                 [7U] 
                                                 >> 1U)))))))));
    bufp->fullBit(oldp+85,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_Question6__DOT__i_data
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
    bufp->fullCData(oldp+86,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [6U] >> 4U))),4);
    bufp->fullCData(oldp+87,((0xfU & (vlSelf->tb_Question6__DOT__i_data
                                      [7U] >> 4U))),4);
    bufp->fullBit(oldp+88,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [7U] >> 4U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [6U] >> 5U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [7U] >> 5U)))))));
    bufp->fullBit(oldp+89,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((vlSelf->tb_Question6__DOT__i_data
                                                [6U] 
                                                ^ vlSelf->tb_Question6__DOT__i_data
                                                [7U]) 
                                               >> 4U))))))));
    bufp->fullBit(oldp+90,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                           [7U] >> 7U)))))));
    bufp->fullCData(oldp+91,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [6U] >> 6U))),2);
    bufp->fullCData(oldp+92,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [7U] >> 6U))),2);
    bufp->fullCData(oldp+93,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [6U] >> 4U))),2);
    bufp->fullCData(oldp+94,((3U & (vlSelf->tb_Question6__DOT__i_data
                                    [7U] >> 4U))),2);
    bufp->fullCData(oldp+95,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [6U])),4);
    bufp->fullCData(oldp+96,((0xfU & vlSelf->tb_Question6__DOT__i_data
                              [7U])),4);
    bufp->fullBit(oldp+97,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
                                       [6U] >> 1U)) 
                                   & ((~ vlSelf->tb_Question6__DOT__i_data
                                       [6U]) & vlSelf->tb_Question6__DOT__i_data
                                      [7U])) | (((~ 
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
    bufp->fullBit(oldp+98,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->tb_Question6__DOT__i_data
                                               [6U] 
                                               ^ vlSelf->tb_Question6__DOT__i_data
                                               [7U]))))))));
    bufp->fullBit(oldp+99,((1U & (((~ (vlSelf->tb_Question6__DOT__i_data
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
                                            [7U] >> 2U))) 
                                     | ((~ (vlSelf->tb_Question6__DOT__i_data
                                            [6U] >> 3U)) 
                                        & (vlSelf->tb_Question6__DOT__i_data
                                           [7U] >> 3U)))))));
    bufp->fullBit(oldp+100,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((vlSelf->tb_Question6__DOT__i_data
                                                 [6U] 
                                                 ^ 
                                                 vlSelf->tb_Question6__DOT__i_data
                                                 [7U]) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+101,((3U & (vlSelf->tb_Question6__DOT__i_data
                                     [6U] >> 2U))),2);
    bufp->fullCData(oldp+102,((3U & (vlSelf->tb_Question6__DOT__i_data
                                     [7U] >> 2U))),2);
    bufp->fullCData(oldp+103,((3U & vlSelf->tb_Question6__DOT__i_data
                               [6U])),2);
    bufp->fullCData(oldp+104,((3U & vlSelf->tb_Question6__DOT__i_data
                               [7U])),2);
    bufp->fullQData(oldp+105,((((QData)((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3)) 
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
    bufp->fullCData(oldp+107,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[0]),8);
    bufp->fullCData(oldp+108,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[1]),8);
    bufp->fullCData(oldp+109,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[2]),8);
    bufp->fullCData(oldp+110,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[3]),8);
    bufp->fullCData(oldp+111,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[4]),8);
    bufp->fullCData(oldp+112,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[5]),8);
    bufp->fullCData(oldp+113,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[6]),8);
    bufp->fullCData(oldp+114,(vlSelf->tb_Question6__DOT__dut__DOT__t_o_sorted[7]),8);
    bufp->fullCData(oldp+115,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[0]),8);
    bufp->fullCData(oldp+116,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[1]),8);
    bufp->fullCData(oldp+117,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[2]),8);
    bufp->fullCData(oldp+118,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[3]),8);
    bufp->fullCData(oldp+119,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[4]),8);
    bufp->fullCData(oldp+120,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[5]),8);
    bufp->fullCData(oldp+121,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[6]),8);
    bufp->fullCData(oldp+122,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_i_data[7]),8);
    bufp->fullCData(oldp+123,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[0]),8);
    bufp->fullCData(oldp+124,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[1]),8);
    bufp->fullCData(oldp+125,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[2]),8);
    bufp->fullCData(oldp+126,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[3]),8);
    bufp->fullCData(oldp+127,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[4]),8);
    bufp->fullCData(oldp+128,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[5]),8);
    bufp->fullCData(oldp+129,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[6]),8);
    bufp->fullCData(oldp+130,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_0_data[7]),8);
    bufp->fullCData(oldp+131,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[0]),8);
    bufp->fullCData(oldp+132,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[1]),8);
    bufp->fullCData(oldp+133,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[2]),8);
    bufp->fullCData(oldp+134,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[3]),8);
    bufp->fullCData(oldp+135,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[4]),8);
    bufp->fullCData(oldp+136,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[5]),8);
    bufp->fullCData(oldp+137,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[6]),8);
    bufp->fullCData(oldp+138,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__w_sorted[7]),8);
    bufp->fullCData(oldp+139,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+140,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+141,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+142,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+143,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+144,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+145,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+146,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+147,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+148,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+149,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+150,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+151,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+152,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+153,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+154,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+155,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+156,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+158,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+159,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+160,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+161,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+162,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+163,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+164,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+165,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+166,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+167,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+168,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+169,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+170,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+172,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+173,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+174,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+175,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+176,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+177,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+178,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+179,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+180,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+181,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+182,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+183,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+184,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+185,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+186,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+187,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+188,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+189,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+190,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+191,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+192,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+193,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+194,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+195,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+196,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+197,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+198,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+199,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+200,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+201,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+202,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+203,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+204,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+205,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+206,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+207,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+208,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+209,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+210,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+211,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+212,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+213,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+214,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+215,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+216,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+217,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+218,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+219,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+220,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+221,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+222,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+223,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+224,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+225,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+226,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+227,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+228,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+229,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+230,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+231,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+232,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+233,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+234,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+235,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+236,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+237,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+238,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+239,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+240,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+241,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+242,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+243,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+244,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+245,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+246,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+247,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+248,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+249,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+250,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+251,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+252,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+253,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+254,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+255,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+256,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+257,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+258,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+259,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+260,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+261,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+262,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+263,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+264,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+265,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+266,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+267,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+268,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+269,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+270,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+271,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+272,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+273,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+274,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+275,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+276,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+277,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+278,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+279,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+280,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+281,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+282,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+283,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+284,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+285,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+286,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+287,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+288,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+289,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+290,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+291,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+292,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+293,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+294,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+295,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+296,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+297,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+298,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+299,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+300,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+301,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+302,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+303,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+304,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+305,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+306,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+307,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+308,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+309,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+310,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+311,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+312,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+313,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+314,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+315,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+316,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+317,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+318,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+319,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+320,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+321,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
    bufp->fullCData(oldp+322,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1),8);
    bufp->fullCData(oldp+323,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2),8);
    bufp->fullCData(oldp+324,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3),8);
    bufp->fullCData(oldp+325,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+326,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
    bufp->fullCData(oldp+327,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
    bufp->fullCData(oldp+328,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+329,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+330,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
    bufp->fullCData(oldp+331,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+332,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
    bufp->fullCData(oldp+333,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullCData(oldp+334,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullBit(oldp+335,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+336,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+337,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
    bufp->fullBit(oldp+338,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+339,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+340,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+341,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+342,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+343,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+344,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+345,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+346,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+347,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+348,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+349,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+350,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
    bufp->fullCData(oldp+351,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
    bufp->fullBit(oldp+352,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+353,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
    bufp->fullBit(oldp+354,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+355,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+356,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+357,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+358,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
    bufp->fullCData(oldp+359,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
    bufp->fullBit(oldp+360,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+361,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+362,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
    bufp->fullBit(oldp+363,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+364,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+365,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+366,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+367,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+368,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+369,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+370,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+371,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+372,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+373,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+374,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+375,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
    bufp->fullCData(oldp+376,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
    bufp->fullBit(oldp+377,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+378,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
    bufp->fullBit(oldp+379,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+380,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+381,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+382,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+383,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
    bufp->fullCData(oldp+384,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
    bufp->fullBit(oldp+385,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
    bufp->fullBit(oldp+386,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+387,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
    bufp->fullBit(oldp+388,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+389,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+390,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+391,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+392,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+393,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+394,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+395,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+396,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+397,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+398,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+399,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+400,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
    bufp->fullCData(oldp+401,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
    bufp->fullBit(oldp+402,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+403,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
    bufp->fullBit(oldp+404,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+405,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+406,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+407,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+408,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
    bufp->fullCData(oldp+409,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
    bufp->fullBit(oldp+410,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
    bufp->fullBit(oldp+411,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+412,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
    bufp->fullBit(oldp+413,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+415,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+416,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+417,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+418,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+419,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+420,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+421,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+422,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+423,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+424,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+425,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+426,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
    bufp->fullBit(oldp+427,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+428,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
    bufp->fullBit(oldp+429,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+430,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+431,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+432,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+433,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+434,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
    bufp->fullBit(oldp+435,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+436,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+437,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+438,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+439,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+440,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+441,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+442,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+443,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+444,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+445,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+446,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+447,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+448,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+449,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+450,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+451,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+452,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+453,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+454,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+455,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+456,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+457,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+458,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+459,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+460,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+461,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+462,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
    bufp->fullBit(oldp+463,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+464,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+465,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+466,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+467,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+468,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+469,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+470,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+471,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+472,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+473,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+474,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+475,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullCData(oldp+476,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
    bufp->fullBit(oldp+477,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+478,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
    bufp->fullBit(oldp+479,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+480,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+481,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+482,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+483,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullCData(oldp+484,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
    bufp->fullBit(oldp+485,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
    bufp->fullBit(oldp+486,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+487,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
    bufp->fullBit(oldp+488,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+489,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+490,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+491,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+492,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+493,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+494,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+495,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+496,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+497,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+498,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+499,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+500,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
    bufp->fullCData(oldp+501,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
    bufp->fullBit(oldp+502,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+503,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
    bufp->fullBit(oldp+504,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+505,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+506,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+507,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+508,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
    bufp->fullCData(oldp+509,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
    bufp->fullBit(oldp+510,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+511,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+512,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+513,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+514,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+515,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+516,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+517,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+518,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+519,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+520,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+521,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+522,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+523,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+524,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+525,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+526,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+527,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+528,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+529,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+530,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+531,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+532,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+533,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+534,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullBit(oldp+535,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
    bufp->fullBit(oldp+536,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+537,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
    bufp->fullBit(oldp+538,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+539,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+540,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+541,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+542,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+543,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+544,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+545,(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+546,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+547,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+548,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+549,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+550,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+551,((0xfU & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
    bufp->fullBit(oldp+552,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+553,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
    bufp->fullBit(oldp+554,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+555,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+556,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+557,((3U & ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+558,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+559,((3U & (IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
    bufp->fullCData(oldp+560,(vlSelf->tb_Question6__DOT__o_sorted[0]),8);
    bufp->fullCData(oldp+561,(vlSelf->tb_Question6__DOT__o_sorted[1]),8);
    bufp->fullCData(oldp+562,(vlSelf->tb_Question6__DOT__o_sorted[2]),8);
    bufp->fullCData(oldp+563,(vlSelf->tb_Question6__DOT__o_sorted[3]),8);
    bufp->fullCData(oldp+564,(vlSelf->tb_Question6__DOT__o_sorted[4]),8);
    bufp->fullCData(oldp+565,(vlSelf->tb_Question6__DOT__o_sorted[5]),8);
    bufp->fullCData(oldp+566,(vlSelf->tb_Question6__DOT__o_sorted[6]),8);
    bufp->fullCData(oldp+567,(vlSelf->tb_Question6__DOT__o_sorted[7]),8);
    bufp->fullBit(oldp+568,(vlSelf->tb_Question6__DOT__i_clk));
    bufp->fullBit(oldp+569,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [1U] >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [0U] 
                                              >> 5U)) 
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
                                            | ((~ (
                                                   vlSelf->tb_Question6__DOT__i_data
                                                   [0U] 
                                                   >> 5U)) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [1U] 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+570,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [0U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [1U]) 
                                                     >> 4U))))))));
    bufp->fullBit(oldp+571,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [3U] >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [2U] 
                                              >> 5U)) 
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
                                            | ((~ (
                                                   vlSelf->tb_Question6__DOT__i_data
                                                   [2U] 
                                                   >> 5U)) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [3U] 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+572,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [2U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [3U]) 
                                                     >> 4U))))))));
    bufp->fullBit(oldp+573,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [5U] >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [4U] 
                                              >> 5U)) 
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
                                            | ((~ (
                                                   vlSelf->tb_Question6__DOT__i_data
                                                   [4U] 
                                                   >> 5U)) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [5U] 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+574,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [4U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [5U]) 
                                                     >> 4U))))))));
    bufp->fullBit(oldp+575,((1U & ((((~ (vlSelf->tb_Question6__DOT__i_data
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
                                             [7U] >> 7U)))) 
                                   | ((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & (((~ (vlSelf->tb_Question6__DOT__i_data
                                              [6U] 
                                              >> 5U)) 
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
                                            | ((~ (
                                                   vlSelf->tb_Question6__DOT__i_data
                                                   [6U] 
                                                   >> 5U)) 
                                               & (vlSelf->tb_Question6__DOT__i_data
                                                  [7U] 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+576,(((IData)(vlSelf->tb_Question6__DOT__dut__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((vlSelf->tb_Question6__DOT__i_data
                                                      [6U] 
                                                      ^ 
                                                      vlSelf->tb_Question6__DOT__i_data
                                                      [7U]) 
                                                     >> 4U))))))));
}
