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
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+2,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+572,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+4,0,"i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+4,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+98,0,"o_sorted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("w_i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+100+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_0_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+108+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+116+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+134,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+134,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+573,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+16,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+28,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+30,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+23,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+136,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+575,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+39,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+35,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+42,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+49,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+46,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+50,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+51,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+44,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+124,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+138,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+138,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+143,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+144,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+141,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+150,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+147,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+145,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+154,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+139,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+157,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+161,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+162,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+155,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+163,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+163,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+166,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+178,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+164,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+182,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+187,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+180,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+188,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+188,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+191,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+203,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+204,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+189,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+210,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+207,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+212,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+205,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+223,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+223,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+577,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+62,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+66,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+56,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+74,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+76,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+225,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+579,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+84,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+87,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+88,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+89,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+77,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+92,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+97,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+90,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+222,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+227,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+218,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+227,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+233,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+230,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+236,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+238,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+239,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+236,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+234,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+242,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+243,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+228,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+248,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+249,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+246,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+250,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+251,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+244,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+252,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+220,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+252,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+268,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+253,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+274,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+271,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+269,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+277,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+221,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+277,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+282,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+280,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+292,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+293,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+278,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+298,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+296,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+300,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+301,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+294,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_8_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,0,"i_data_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"i_data_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"i_data_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"i_data_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"o_data_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"o_data_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"o_data_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+309,0,"o_data_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"w_data_max_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"w_data_max_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"w_data_min_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+309,0,"w_data_min_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"w_data_max_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"w_data_min_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"w_data_max_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"w_data_min_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"w_data_min_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"w_data_max_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+322,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+213,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+322,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+327,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+328,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+325,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+333,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+334,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+335,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+336,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+329,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+337,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+338,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+323,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+343,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+341,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+345,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+346,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+339,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+347,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+347,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+352,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+350,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+358,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+356,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+360,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+361,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+354,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+362,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+363,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+348,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+368,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+366,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+370,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+371,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+364,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+372,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+372,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+377,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+378,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+375,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+379,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+384,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+381,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+386,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+379,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+388,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+373,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+393,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+394,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+391,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+395,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+396,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+389,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+309,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+397,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+402,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+403,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+400,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+408,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+409,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+406,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+410,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+411,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+404,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+412,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+413,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+398,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+418,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+419,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+416,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+421,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+414,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+422,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+310,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+422,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+428,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+425,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+431,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+429,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+430,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+437,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+438,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+423,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+443,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+444,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+441,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+445,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+446,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+439,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+447,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+453,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+450,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+459,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+456,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+454,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+462,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+463,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+448,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+468,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+469,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+466,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+470,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+471,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+464,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+308,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+472,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+312,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+472,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+477,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+478,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+475,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+481,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+483,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+484,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+481,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+485,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+486,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+479,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+487,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+488,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+473,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+493,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+494,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+491,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+492,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+495,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+496,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+489,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+497,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+497,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+502,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+503,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+500,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+506,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+508,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+509,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+506,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+510,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+511,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+504,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+512,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+513,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+498,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+518,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+519,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+516,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+520,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+521,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+514,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+307,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+522,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+522,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+528,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+525,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+533,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+534,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+531,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+535,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+536,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+529,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+537,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+538,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+523,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+544,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+541,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+545,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+546,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+539,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_3_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+581,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+305,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+306,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+547,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+582,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+547,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+552,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+553,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+550,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+558,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+556,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+560,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+561,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+554,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+562,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+563,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+548,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+568,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+569,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+566,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+570,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+571,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+564,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+581,(1U),32);
    bufp->fullIData(oldp+582,(8U),32);
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
    bufp->fullIData(oldp+1,(vlSelf->tb_Question6__DOT__test_count),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_Question6__DOT__test_pass),32);
    bufp->fullBit(oldp+3,(vlSelf->tb_Question6__DOT__i_rst_n));
    bufp->fullQData(oldp+4,(vlSelf->tb_Question6__DOT__i_data),64);
    bufp->fullCData(oldp+6,((0xffU & (IData)(vlSelf->tb_Question6__DOT__i_data))),8);
    bufp->fullCData(oldp+7,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 8U)))),8);
    bufp->fullCData(oldp+8,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x10U)))),8);
    bufp->fullCData(oldp+9,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x18U)))),8);
    bufp->fullBit(oldp+10,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xcULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0xaU))) 
                                   | ((IData)((0xc00ULL 
                                               == (0xc04ULL 
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
    bufp->fullBit(oldp+11,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullCData(oldp+12,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 4U)))),4);
    bufp->fullCData(oldp+13,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0xcU)))),4);
    bufp->fullBit(oldp+14,((1U & (((~ (IData)((0ULL 
                                               != (0x30ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0xcU))) 
                                  | ((IData)((0x3000ULL 
                                              == (0x3010ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x2000ULL 
                                                == 
                                                (0x2020ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+15,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0xcU))))))))));
    bufp->fullBit(oldp+16,((1U & (((~ (IData)((0ULL 
                                               != (0xc0ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0xeU))) 
                                  | ((IData)((0xc000ULL 
                                              == (0xc040ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x8000ULL 
                                                == 
                                                (0x8080ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullCData(oldp+17,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 6U)))),2);
    bufp->fullCData(oldp+18,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0xeU)))),2);
    bufp->fullCData(oldp+19,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 4U)))),2);
    bufp->fullCData(oldp+20,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0xcU)))),2);
    bufp->fullCData(oldp+21,((0xfU & (IData)(vlSelf->tb_Question6__DOT__i_data))),4);
    bufp->fullCData(oldp+22,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 8U)))),4);
    bufp->fullBit(oldp+23,((1U & (((~ ((IData)((vlSelf->tb_Question6__DOT__i_data 
                                                >> 1U)) 
                                       | (IData)(vlSelf->tb_Question6__DOT__i_data))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 8U))) 
                                  | ((IData)((0x300ULL 
                                              == (0x301ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x200ULL 
                                                == 
                                                (0x202ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+24,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(vlSelf->tb_Question6__DOT__i_data) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 8U))))))))));
    bufp->fullBit(oldp+25,((1U & (((~ (IData)((0ULL 
                                               != (0xcULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0xaU))) 
                                  | ((IData)((0xc00ULL 
                                              == (0xc04ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x800ULL 
                                                == 
                                                (0x808ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+26,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0xaU))))))))));
    bufp->fullCData(oldp+27,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 2U)))),2);
    bufp->fullCData(oldp+28,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0xaU)))),2);
    bufp->fullCData(oldp+29,((3U & (IData)(vlSelf->tb_Question6__DOT__i_data))),2);
    bufp->fullCData(oldp+30,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 8U)))),2);
    bufp->fullBit(oldp+31,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc0000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x1aU))) 
                                   | ((IData)((0xc000000ULL 
                                               == (0xc040000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x8080000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((~ (IData)((0U 
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
    bufp->fullBit(oldp+32,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullCData(oldp+33,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x14U)))),4);
    bufp->fullCData(oldp+34,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x1cU)))),4);
    bufp->fullBit(oldp+35,((1U & (((~ (IData)((0ULL 
                                               != (0x300000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x1cU))) 
                                  | ((IData)((0x30000000ULL 
                                              == (0x30100000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x20000000ULL 
                                                == 
                                                (0x20200000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+36,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x1cU))))))))));
    bufp->fullBit(oldp+37,((1U & (((~ (IData)((0ULL 
                                               != (0xc00000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x1eU))) 
                                  | ((IData)((0xc0000000ULL 
                                              == (0xc0400000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x80000000ULL 
                                                == 
                                                (0x80800000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullCData(oldp+38,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x16U)))),2);
    bufp->fullCData(oldp+39,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x1eU)))),2);
    bufp->fullCData(oldp+40,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x14U)))),2);
    bufp->fullCData(oldp+41,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x1cU)))),2);
    bufp->fullCData(oldp+42,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x10U)))),4);
    bufp->fullCData(oldp+43,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x18U)))),4);
    bufp->fullBit(oldp+44,((1U & (((~ (IData)((0ULL 
                                               != (0x30000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x18U))) 
                                  | ((IData)((0x3000000ULL 
                                              == (0x3010000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x2000000ULL 
                                                == 
                                                (0x2020000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+45,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x18U))))))))));
    bufp->fullBit(oldp+46,((1U & (((~ (IData)((0ULL 
                                               != (0xc0000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x1aU))) 
                                  | ((IData)((0xc000000ULL 
                                              == (0xc040000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x8000000ULL 
                                                == 
                                                (0x8080000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+47,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x1aU))))))))));
    bufp->fullCData(oldp+48,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x12U)))),2);
    bufp->fullCData(oldp+49,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x1aU)))),2);
    bufp->fullCData(oldp+50,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x10U)))),2);
    bufp->fullCData(oldp+51,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x18U)))),2);
    bufp->fullCData(oldp+52,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x20U)))),8);
    bufp->fullCData(oldp+53,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x28U)))),8);
    bufp->fullCData(oldp+54,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x30U)))),8);
    bufp->fullCData(oldp+55,((0xffU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x38U)))),8);
    bufp->fullBit(oldp+56,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc00000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x2aU))) 
                                   | ((IData)((0xc0000000000ULL 
                                               == (0xc0400000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x80000000000ULL 
                                                 == 
                                                 (0x80800000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((~ (IData)((0U 
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
    bufp->fullBit(oldp+57,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullCData(oldp+58,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x24U)))),4);
    bufp->fullCData(oldp+59,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x2cU)))),4);
    bufp->fullBit(oldp+60,((1U & (((~ (IData)((0ULL 
                                               != (0x3000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x2cU))) 
                                  | ((IData)((0x300000000000ULL 
                                              == (0x301000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x200000000000ULL 
                                                == 
                                                (0x202000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+61,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x24U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x2cU))))))))));
    bufp->fullBit(oldp+62,((1U & (((~ (IData)((0ULL 
                                               != (0xc000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x2eU))) 
                                  | ((IData)((0xc00000000000ULL 
                                              == (0xc04000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x800000000000ULL 
                                                == 
                                                (0x808000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullCData(oldp+63,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x26U)))),2);
    bufp->fullCData(oldp+64,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x2eU)))),2);
    bufp->fullCData(oldp+65,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x24U)))),2);
    bufp->fullCData(oldp+66,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x2cU)))),2);
    bufp->fullCData(oldp+67,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x20U)))),4);
    bufp->fullCData(oldp+68,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x28U)))),4);
    bufp->fullBit(oldp+69,((1U & (((~ (IData)((0ULL 
                                               != (0x300000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x28U))) 
                                  | ((IData)((0x30000000000ULL 
                                              == (0x30100000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x20000000000ULL 
                                                == 
                                                (0x20200000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+70,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x20U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x28U))))))))));
    bufp->fullBit(oldp+71,((1U & (((~ (IData)((0ULL 
                                               != (0xc00000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x2aU))) 
                                  | ((IData)((0xc0000000000ULL 
                                              == (0xc0400000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x80000000000ULL 
                                                == 
                                                (0x80800000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+72,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x22U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x2aU))))))))));
    bufp->fullCData(oldp+73,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x22U)))),2);
    bufp->fullCData(oldp+74,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x2aU)))),2);
    bufp->fullCData(oldp+75,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x20U)))),2);
    bufp->fullCData(oldp+76,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x28U)))),2);
    bufp->fullBit(oldp+77,((1U & ((((~ (IData)((0ULL 
                                                != 
                                                (0xc000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data)))) 
                                    & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                               >> 0x3aU))) 
                                   | ((IData)((0xc00000000000000ULL 
                                               == (0xc04000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data))) 
                                      | (IData)((0x800000000000000ULL 
                                                 == 
                                                 (0x808000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))))) 
                                  | ((~ (IData)((0U 
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
    bufp->fullBit(oldp+78,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullCData(oldp+79,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x34U)))),4);
    bufp->fullCData(oldp+80,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x3cU)))),4);
    bufp->fullBit(oldp+81,((1U & (((~ (IData)((0ULL 
                                               != (0x30000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x3cU))) 
                                  | ((IData)((0x3000000000000000ULL 
                                              == (0x3010000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x2000000000000000ULL 
                                                == 
                                                (0x2020000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+82,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x34U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x3cU))))))))));
    bufp->fullBit(oldp+83,((1U & (((~ (IData)((0ULL 
                                               != (0xc0000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x3eU))) 
                                  | ((IData)((0xc000000000000000ULL 
                                              == (0xc040000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x8000000000000000ULL 
                                                == 
                                                (0x8080000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullCData(oldp+84,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x36U)))),2);
    bufp->fullCData(oldp+85,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x3eU)))),2);
    bufp->fullCData(oldp+86,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x34U)))),2);
    bufp->fullCData(oldp+87,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x3cU)))),2);
    bufp->fullCData(oldp+88,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x30U)))),4);
    bufp->fullCData(oldp+89,((0xfU & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x38U)))),4);
    bufp->fullBit(oldp+90,((1U & (((~ (IData)((0ULL 
                                               != (0x3000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x38U))) 
                                  | ((IData)((0x300000000000000ULL 
                                              == (0x301000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x200000000000000ULL 
                                                == 
                                                (0x202000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+91,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x30U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x38U))))))))));
    bufp->fullBit(oldp+92,((1U & (((~ (IData)((0ULL 
                                               != (0xc000000000000ULL 
                                                   & vlSelf->tb_Question6__DOT__i_data)))) 
                                   & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                              >> 0x3aU))) 
                                  | ((IData)((0xc00000000000000ULL 
                                              == (0xc04000000000000ULL 
                                                  & vlSelf->tb_Question6__DOT__i_data))) 
                                     | (IData)((0x800000000000000ULL 
                                                == 
                                                (0x808000000000000ULL 
                                                 & vlSelf->tb_Question6__DOT__i_data))))))));
    bufp->fullBit(oldp+93,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_Question6__DOT__i_data 
                                                        >> 0x32U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_Question6__DOT__i_data 
                                                          >> 0x3aU))))))))));
    bufp->fullCData(oldp+94,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x32U)))),2);
    bufp->fullCData(oldp+95,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x3aU)))),2);
    bufp->fullCData(oldp+96,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x30U)))),2);
    bufp->fullCData(oldp+97,((3U & (IData)((vlSelf->tb_Question6__DOT__i_data 
                                            >> 0x38U)))),2);
    bufp->fullQData(oldp+98,((((QData)((IData)(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
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
    bufp->fullCData(oldp+100,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[0]),8);
    bufp->fullCData(oldp+101,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[1]),8);
    bufp->fullCData(oldp+102,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[2]),8);
    bufp->fullCData(oldp+103,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[3]),8);
    bufp->fullCData(oldp+104,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[4]),8);
    bufp->fullCData(oldp+105,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[5]),8);
    bufp->fullCData(oldp+106,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[6]),8);
    bufp->fullCData(oldp+107,(vlSelf->tb_Question6__DOT__DUT__DOT__w_i_data[7]),8);
    bufp->fullCData(oldp+108,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[0]),8);
    bufp->fullCData(oldp+109,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[1]),8);
    bufp->fullCData(oldp+110,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[2]),8);
    bufp->fullCData(oldp+111,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[3]),8);
    bufp->fullCData(oldp+112,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[4]),8);
    bufp->fullCData(oldp+113,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[5]),8);
    bufp->fullCData(oldp+114,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[6]),8);
    bufp->fullCData(oldp+115,(vlSelf->tb_Question6__DOT__DUT__DOT__w_0_data[7]),8);
    bufp->fullCData(oldp+116,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[0]),8);
    bufp->fullCData(oldp+117,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[1]),8);
    bufp->fullCData(oldp+118,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[2]),8);
    bufp->fullCData(oldp+119,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[3]),8);
    bufp->fullCData(oldp+120,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[4]),8);
    bufp->fullCData(oldp+121,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[5]),8);
    bufp->fullCData(oldp+122,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[6]),8);
    bufp->fullCData(oldp+123,(vlSelf->tb_Question6__DOT__DUT__DOT__w_sorted[7]),8);
    bufp->fullCData(oldp+124,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+125,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+126,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+127,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+128,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+129,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+130,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+131,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+132,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+133,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+134,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+135,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+136,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+137,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+138,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+139,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+140,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+141,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+142,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+143,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+144,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+145,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+146,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+147,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+148,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+149,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+150,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+151,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+152,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+153,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+154,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+155,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+156,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+157,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+158,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+159,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+160,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+161,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+162,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+163,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+164,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+165,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+166,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+167,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+168,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+169,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+170,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+171,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+172,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+173,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+174,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+175,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+176,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+177,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+178,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+179,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+180,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+181,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+182,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+183,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+184,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+185,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+186,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+187,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+188,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+189,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+190,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+191,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+192,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+193,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+194,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+195,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+196,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+197,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+198,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+199,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+200,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+201,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+202,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+203,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+204,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+205,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+206,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+207,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+208,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+209,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+210,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+211,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+212,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+213,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+214,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+215,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+216,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+217,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+218,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+219,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+220,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+221,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+222,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+223,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+224,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+225,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+226,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullBit(oldp+227,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+228,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+229,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+230,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+232,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+233,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+234,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+235,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+236,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+237,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+238,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+239,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+240,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+241,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+242,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+243,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+244,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+245,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+246,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+247,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+248,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+249,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+250,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+251,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+252,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+253,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+254,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+255,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+257,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+258,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+259,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+260,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+261,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+262,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+263,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+264,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+265,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+266,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+267,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+268,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+269,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+270,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+271,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+272,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+273,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+274,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+275,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+276,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+277,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+278,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+279,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+280,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+281,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+282,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+283,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+284,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+285,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+286,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+287,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+288,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+289,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+290,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+291,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+292,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+293,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+294,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+295,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+296,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+297,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+298,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+299,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+300,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+301,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+302,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),8);
    bufp->fullCData(oldp+303,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),8);
    bufp->fullCData(oldp+304,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),8);
    bufp->fullCData(oldp+305,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),8);
    bufp->fullCData(oldp+306,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),8);
    bufp->fullCData(oldp+307,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),8);
    bufp->fullCData(oldp+308,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),8);
    bufp->fullCData(oldp+309,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare)
                                ? (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)
                                : (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),8);
    bufp->fullCData(oldp+310,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+311,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
    bufp->fullCData(oldp+312,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
    bufp->fullCData(oldp+313,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+314,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+315,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
    bufp->fullCData(oldp+316,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+317,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
    bufp->fullCData(oldp+318,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullCData(oldp+319,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+320,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
    bufp->fullCData(oldp+321,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullBit(oldp+322,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+323,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+324,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
    bufp->fullBit(oldp+325,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+326,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+327,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+328,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+329,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+330,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+331,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+332,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+333,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+334,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+335,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+336,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+337,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
    bufp->fullCData(oldp+338,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
    bufp->fullBit(oldp+339,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+340,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
    bufp->fullBit(oldp+341,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+342,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+343,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+344,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+345,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
    bufp->fullCData(oldp+346,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
    bufp->fullBit(oldp+347,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+348,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+349,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
    bufp->fullBit(oldp+350,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+351,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+352,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+353,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+354,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+355,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+356,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+357,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+358,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+359,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+360,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+361,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+362,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
    bufp->fullCData(oldp+363,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
    bufp->fullBit(oldp+364,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+365,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
    bufp->fullBit(oldp+366,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+367,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+368,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+369,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+370,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
    bufp->fullCData(oldp+371,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
    bufp->fullBit(oldp+372,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
    bufp->fullBit(oldp+373,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+374,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
    bufp->fullBit(oldp+375,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+376,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+377,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+378,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+379,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+380,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+381,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+382,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+383,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+384,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+385,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+386,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+387,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
    bufp->fullCData(oldp+388,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
    bufp->fullBit(oldp+389,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+390,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
    bufp->fullBit(oldp+391,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+392,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+393,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+394,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+395,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
    bufp->fullCData(oldp+396,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
    bufp->fullBit(oldp+397,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
    bufp->fullBit(oldp+398,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+399,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
    bufp->fullBit(oldp+400,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+401,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+402,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+403,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+404,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+405,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+406,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+407,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+408,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+409,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+410,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+411,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+412,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+413,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
    bufp->fullBit(oldp+414,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+415,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
    bufp->fullBit(oldp+416,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+417,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+418,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+419,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+420,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+421,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
    bufp->fullBit(oldp+422,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+423,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+424,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+425,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+426,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+427,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+428,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+429,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+430,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+431,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+432,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+433,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+434,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+435,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+436,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+437,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+438,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+439,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+440,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+441,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+442,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+443,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+444,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+445,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+446,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+447,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+448,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+449,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
    bufp->fullBit(oldp+450,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+451,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+452,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+453,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+454,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+455,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+456,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+457,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+458,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+459,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+460,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+461,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+462,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullCData(oldp+463,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
    bufp->fullBit(oldp+464,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+465,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
    bufp->fullBit(oldp+466,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+467,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+468,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+469,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+470,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullCData(oldp+471,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
    bufp->fullBit(oldp+472,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
    bufp->fullBit(oldp+473,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+474,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
    bufp->fullBit(oldp+475,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+476,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+477,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+478,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+479,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+480,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+481,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+482,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+483,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+484,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+485,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+486,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+487,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
    bufp->fullCData(oldp+488,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
    bufp->fullBit(oldp+489,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+490,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
    bufp->fullBit(oldp+491,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+492,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+493,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+494,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+495,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
    bufp->fullCData(oldp+496,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
    bufp->fullBit(oldp+497,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+498,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+499,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+500,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+501,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+502,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+503,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+504,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+505,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+506,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+507,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+508,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+509,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+510,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+511,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+512,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+513,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+514,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+515,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+516,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+517,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+518,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+519,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+520,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+521,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullBit(oldp+522,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
    bufp->fullBit(oldp+523,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+524,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
    bufp->fullBit(oldp+525,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+526,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+527,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+528,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+529,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+530,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+531,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+532,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+533,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+534,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+535,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+536,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+537,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+538,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
    bufp->fullBit(oldp+539,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+540,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
    bufp->fullBit(oldp+541,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+542,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+543,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+544,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+545,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+546,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
    bufp->fullBit(oldp+547,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__w_compare));
    bufp->fullBit(oldp+548,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xcU 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                        >> 2U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                      >> 2U)) 
                                                    & (IData)(
                                                              (0xcU 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                         >> 3U)))) 
                                   | ((~ (IData)((0U 
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
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+549,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))))))));
    bufp->fullBit(oldp+550,((1U & ((((~ (IData)((0U 
                                                 != 
                                                 (0xc0U 
                                                  & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                        >> 6U)) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                      >> 6U)) 
                                                    & (IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0xc0U 
                                                                & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
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
                                         | (((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 >> 4U)) 
                                             & (IData)(
                                                       (0x30U 
                                                        == 
                                                        (0x30U 
                                                         & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                            | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+552,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+553,((0xfU & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+554,((1U & (((~ (IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                       >> 4U)) | ((
                                                   (~ 
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
                                                        >> 5U)))))));
    bufp->fullBit(oldp+555,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+556,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xc0U 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                       >> 6U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 6U)) 
                                                   & (IData)(
                                                             (0xc0U 
                                                              == 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                        >> 7U)))))));
    bufp->fullBit(oldp+557,(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_3_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+558,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+559,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+560,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+561,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+562,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),4);
    bufp->fullCData(oldp+563,((0xfU & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),4);
    bufp->fullBit(oldp+564,((1U & (((~ (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                         >> 1U) | (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))) 
                                    & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                   | (((~ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0)) 
                                       & (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                           >> 1U) & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))) 
                                      | ((~ ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+565,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)))))))));
    bufp->fullBit(oldp+566,((1U & (((~ (IData)((0U 
                                                != 
                                                (0xcU 
                                                 & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))))) 
                                    & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                       >> 2U)) | ((
                                                   (~ 
                                                    ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                     >> 2U)) 
                                                   & (IData)(
                                                             (0xcU 
                                                              == 
                                                              (0xcU 
                                                               & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))))) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                       >> 3U)) 
                                                     & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                                        >> 3U)))))));
    bufp->fullBit(oldp+567,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+568,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+569,((3U & ((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+570,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0))),2);
    bufp->fullCData(oldp+571,((3U & (IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1))),2);
    bufp->fullBit(oldp+572,(vlSelf->tb_Question6__DOT__i_clk));
    bufp->fullBit(oldp+573,((1U & ((((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+574,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0xcU))))))))));
    bufp->fullBit(oldp+575,((1U & ((((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+576,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x1cU))))))))));
    bufp->fullBit(oldp+577,((1U & ((((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+578,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x2cU))))))))));
    bufp->fullBit(oldp+579,((1U & ((((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+580,(((IData)(vlSelf->tb_Question6__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_Question6__DOT__i_data 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_Question6__DOT__i_data 
                                                                >> 0x3cU))))))))));
}
