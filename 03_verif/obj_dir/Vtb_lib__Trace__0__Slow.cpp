// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_lib__Syms.h"


VL_ATTR_COLD void Vtb_lib___024root__trace_init_sub__TOP__P_INITVALUE__0(Vtb_lib___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_lib___024root__trace_init_sub__TOP__0(Vtb_lib___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("P_INITVALUE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_lib___024root__trace_init_sub__TOP__P_INITVALUE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+558,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+559,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+560,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_parallel_prefix_binary", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+559,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+560,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"w_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"w_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"w_max_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"w_max_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"w_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"w_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"w_min_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"w_min_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"w_L_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"w_L_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"w_G_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("PPBC_black_cell_unit_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+572,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+573,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+561,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"o_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_black_cell_unit_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+574,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+575,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+562,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"o_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_black_cell_unit_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+576,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+577,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+563,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"o_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_black_cell_unit_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+578,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+579,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+564,0,"o_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"o_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_gray_cell_unit_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+565,0,"i_G_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"i_L_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+566,0,"i_G_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"o_L",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_gray_cell_unit_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+561,0,"i_G_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"i_L_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"i_G_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"o_L",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_gray_cell_unit_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+567,0,"i_G_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"i_L_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"i_G_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"o_L",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("PPBC_gray_cell_unit_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+569,0,"i_G_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+571,0,"i_L_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+570,0,"i_G_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"o_L",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+580,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"i_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"w_i_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"w_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"w_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"w_finish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DRIVER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+587,0,"NUM_REPEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+588,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+588,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+580,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"o_data_simulus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"o_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"o_finish",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"cur_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+582,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+8,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+580,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"w_o_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+1,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"o_sorted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("w_i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_0_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("w_sorted", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+45,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+49,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+49,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+56,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+64,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+65,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+50,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+70,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+79,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+77,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+83,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+87,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+88,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+81,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+90,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+75,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+96,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+93,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+99,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+105,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+102,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+108,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+100,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+118,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+124,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+46,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+124,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+127,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+135,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+136,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+133,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+137,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+138,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+131,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+139,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+140,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+125,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+145,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+146,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+143,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+148,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+141,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+155,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+152,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+161,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+158,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+163,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+156,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+150,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+171,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+168,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+172,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+173,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+166,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_4_UNIT_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+176,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+182,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+184,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+188,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+175,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
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
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+213,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+177,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+213,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+218,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+219,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+216,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+228,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+229,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+235,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+232,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+236,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+237,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+230,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+187,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+183,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+249,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+250,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+247,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+251,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+252,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+245,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+253,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+254,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+239,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+260,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+257,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+262,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+255,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+263,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+185,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+263,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+268,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+269,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+266,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+275,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+272,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+270,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+278,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+279,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+264,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+285,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+282,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+287,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+280,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+288,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+186,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+288,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+294,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+291,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+299,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+297,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+301,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+302,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+295,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+303,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+289,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+309,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+310,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+307,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+312,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+305,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("BN_8_UNIT_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"i_data_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"i_data_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"i_data_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"i_data_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"i_data_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"i_data_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"i_data_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"i_data_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"o_data_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"o_data_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"o_data_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"o_data_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"o_data_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"o_data_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"o_data_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"o_data_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"w_data_max_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"w_data_max_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"w_data_max_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"w_data_max_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"w_data_min_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"w_data_min_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"w_data_min_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"w_data_min_0_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"w_data_max_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"w_data_max_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"w_data_max_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"w_data_min_1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"w_data_min_1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"w_data_min_1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"w_data_max_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"w_data_max_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"w_data_min_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"w_data_min_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("CAS_0_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+313,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+324,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+331,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+178,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+331,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+336,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+337,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+334,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+342,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+340,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+344,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+338,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+346,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+332,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+352,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+353,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+350,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+355,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+348,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+356,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+179,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+356,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+361,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+362,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+359,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+367,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+368,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+365,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+370,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+363,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+372,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+357,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+373,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+375,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+377,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+378,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+375,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+380,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+373,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+374,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+326,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+381,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+180,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+381,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+387,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+384,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+392,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+393,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+390,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+394,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+395,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+388,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+396,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+397,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+382,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+402,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+403,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+400,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+404,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+405,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+398,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_0_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+320,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+406,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+406,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+411,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+412,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+409,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+410,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+413,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+417,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+418,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+415,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+419,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+420,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+413,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+414,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+421,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+422,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+407,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+428,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+425,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+429,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+430,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+423,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+314,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+431,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+321,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+431,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+436,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+434,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+438,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+443,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+440,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+444,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+445,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+438,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+446,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+447,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+432,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+452,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+453,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+450,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+454,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+455,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+448,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+330,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+456,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+322,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+456,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+461,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+459,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+467,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+468,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+465,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+469,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+470,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+463,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+471,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+472,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+457,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+477,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+478,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+475,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+476,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+479,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+480,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+473,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_1_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+319,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+481,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+323,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+481,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+482,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+487,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+484,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+485,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+488,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+492,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+493,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+490,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+491,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+494,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+495,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+488,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+496,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+497,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+482,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+502,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+503,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+500,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+504,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+505,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+498,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+315,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+506,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+327,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+506,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+512,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+509,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+510,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+517,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+518,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+515,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+519,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+520,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+513,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+521,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+522,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+507,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+527,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+528,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+525,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+529,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+530,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+523,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("CAS_2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+317,0,"o_data_max",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+318,0,"o_data_min",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+531,0,"w_compare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_UNIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+328,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+531,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+536,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+537,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+534,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+542,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+543,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+540,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+545,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+538,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+546,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+547,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+532,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+548,0,"w_less_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"w_equal_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+550,0,"w_less_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"w_equal_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_high", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+552,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+553,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+550,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+551,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_low", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+554,0,"i_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"i_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+548,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+549,0,"o_equal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("SCOREBOARD", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+580,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"i_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"i_start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"i_finish",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1,0,"i_expect",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+583,0,"test_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+584,0,"test_pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+556,0,"expected_sorted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+585,0,"test_complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_lib___024root__trace_init_sub__TOP__P_INITVALUE__0(Vtb_lib___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_init_sub__TOP__P_INITVALUE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+589,0,"IS_ASC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"NUM_ELEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"SIZE_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_init_top(Vtb_lib___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_init_top\n"); );
    // Body
    Vtb_lib___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_lib___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_lib___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_lib___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_lib___024root__trace_register(Vtb_lib___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_lib___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_lib___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_lib___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_lib___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_const_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_lib___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_const_0\n"); );
    // Init
    Vtb_lib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lib___024root*>(voidSelf);
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_lib___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_const_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+586,(8U),32);
    bufp->fullIData(oldp+587,(0x64U),32);
    bufp->fullIData(oldp+588,(8U),32);
    bufp->fullIData(oldp+589,(1U),32);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_full_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_lib___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_full_0\n"); );
    // Init
    Vtb_lib___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_lib___024root*>(voidSelf);
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_lib___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_lib___024root__trace_full_0_sub_0(Vtb_lib___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lib__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lib___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->tb_top__DOT__w_i_data),64);
    bufp->fullQData(oldp+3,(vlSelf->tb_top__DOT__w_o_data),64);
    bufp->fullBit(oldp+5,(vlSelf->tb_top__DOT__w_start));
    bufp->fullBit(oldp+6,(vlSelf->tb_top__DOT__w_finish));
    bufp->fullCData(oldp+7,(vlSelf->tb_top__DOT__DRIVER__DOT__cur_state),2);
    bufp->fullIData(oldp+8,(vlSelf->tb_top__DOT__DRIVER__DOT__counter),32);
    bufp->fullQData(oldp+9,((((QData)((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3)) 
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
    bufp->fullCData(oldp+11,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[0]),8);
    bufp->fullCData(oldp+12,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[1]),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[2]),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[3]),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[4]),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[5]),8);
    bufp->fullCData(oldp+17,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[6]),8);
    bufp->fullCData(oldp+18,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_i_data[7]),8);
    bufp->fullCData(oldp+19,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[0]),8);
    bufp->fullCData(oldp+20,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[1]),8);
    bufp->fullCData(oldp+21,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[2]),8);
    bufp->fullCData(oldp+22,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[3]),8);
    bufp->fullCData(oldp+23,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[4]),8);
    bufp->fullCData(oldp+24,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[5]),8);
    bufp->fullCData(oldp+25,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[6]),8);
    bufp->fullCData(oldp+26,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_0_data[7]),8);
    bufp->fullCData(oldp+27,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[0]),8);
    bufp->fullCData(oldp+28,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[1]),8);
    bufp->fullCData(oldp+29,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[2]),8);
    bufp->fullCData(oldp+30,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[3]),8);
    bufp->fullCData(oldp+31,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[4]),8);
    bufp->fullCData(oldp+32,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[5]),8);
    bufp->fullCData(oldp+33,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[6]),8);
    bufp->fullCData(oldp+34,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__w_sorted[7]),8);
    bufp->fullCData(oldp+35,((0xffU & (IData)(vlSelf->tb_top__DOT__w_i_data))),8);
    bufp->fullCData(oldp+36,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 8U)))),8);
    bufp->fullCData(oldp+37,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x10U)))),8);
    bufp->fullCData(oldp+38,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x18U)))),8);
    bufp->fullCData(oldp+39,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+40,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+41,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+42,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+43,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+44,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+45,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+46,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+47,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+48,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+49,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+50,((1U & (((IData)((0x400ULL 
                                            == (0x40cULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc00ULL 
                                               == (0xc04ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x800ULL 
                                                 == 
                                                 (0x808ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0xaU))))))) 
                                     & ((IData)((0x100ULL 
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
    bufp->fullBit(oldp+51,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullBit(oldp+52,((1U & (((IData)((0x4000ULL 
                                            == (0x40c0ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc000ULL 
                                               == (0xc040ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x8000ULL 
                                                 == 
                                                 (0x8080ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))) 
                                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & ((IData)((0x1000ULL 
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
    bufp->fullBit(oldp+53,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 4U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0xcU))))))))));
    bufp->fullCData(oldp+54,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 4U)))),4);
    bufp->fullCData(oldp+55,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 0xcU)))),4);
    bufp->fullBit(oldp+56,((1U & ((IData)((0x1000ULL 
                                           == (0x1030ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0x3000ULL 
                                              == (0x3010ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x2000ULL 
                                                == 
                                                (0x2020ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 4U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0xcU))))))))));
    bufp->fullBit(oldp+58,((1U & ((IData)((0x4000ULL 
                                           == (0x40c0ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0xc000ULL 
                                              == (0xc040ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x8000ULL 
                                                == 
                                                (0x8080ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+59,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+60,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 6U)))),2);
    bufp->fullCData(oldp+61,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0xeU)))),2);
    bufp->fullCData(oldp+62,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 4U)))),2);
    bufp->fullCData(oldp+63,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0xcU)))),2);
    bufp->fullCData(oldp+64,((0xfU & (IData)(vlSelf->tb_top__DOT__w_i_data))),4);
    bufp->fullCData(oldp+65,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 8U)))),4);
    bufp->fullBit(oldp+66,((1U & ((IData)((0x100ULL 
                                           == (0x103ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0x300ULL 
                                              == (0x301ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x200ULL 
                                                == 
                                                (0x202ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+67,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(vlSelf->tb_top__DOT__w_i_data) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 8U))))))))));
    bufp->fullBit(oldp+68,((1U & ((IData)((0x400ULL 
                                           == (0x40cULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0xc00ULL 
                                              == (0xc04ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x800ULL 
                                                == 
                                                (0x808ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+69,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 2U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0xaU))))))))));
    bufp->fullCData(oldp+70,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 2U)))),2);
    bufp->fullCData(oldp+71,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0xaU)))),2);
    bufp->fullCData(oldp+72,((3U & (IData)(vlSelf->tb_top__DOT__w_i_data))),2);
    bufp->fullCData(oldp+73,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 8U)))),2);
    bufp->fullBit(oldp+74,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+75,((1U & (((IData)((0x4000000ULL 
                                            == (0x40c0000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc000000ULL 
                                               == (0xc040000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x8000000ULL 
                                                 == 
                                                 (0x8080000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))) 
                                  | ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x1aU))))))) 
                                     & ((IData)((0x1000000ULL 
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
    bufp->fullBit(oldp+76,((1U & ((~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
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
    bufp->fullBit(oldp+77,((1U & (((IData)((0x40000000ULL 
                                            == (0x40c00000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc0000000ULL 
                                               == (0xc0400000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x80000000ULL 
                                                 == 
                                                 (0x80800000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))) 
                                  | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                     & ((IData)((0x10000000ULL 
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
    bufp->fullBit(oldp+78,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                            & (~ (IData)((0U != (3U 
                                                 & ((IData)(
                                                            (vlSelf->tb_top__DOT__w_i_data 
                                                             >> 0x14U)) 
                                                    ^ (IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x1cU))))))))));
    bufp->fullCData(oldp+79,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 0x14U)))),4);
    bufp->fullCData(oldp+80,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 0x1cU)))),4);
    bufp->fullBit(oldp+81,((1U & ((IData)((0x10000000ULL 
                                           == (0x10300000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0x30000000ULL 
                                              == (0x30100000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x20000000ULL 
                                                == 
                                                (0x20200000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+82,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 0x14U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0x1cU))))))))));
    bufp->fullBit(oldp+83,((1U & ((IData)((0x40000000ULL 
                                           == (0x40c00000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0xc0000000ULL 
                                              == (0xc0400000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x80000000ULL 
                                                == 
                                                (0x80800000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+84,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+85,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x16U)))),2);
    bufp->fullCData(oldp+86,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x1eU)))),2);
    bufp->fullCData(oldp+87,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x14U)))),2);
    bufp->fullCData(oldp+88,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x1cU)))),2);
    bufp->fullCData(oldp+89,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 0x10U)))),4);
    bufp->fullCData(oldp+90,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                              >> 0x18U)))),4);
    bufp->fullBit(oldp+91,((1U & ((IData)((0x1000000ULL 
                                           == (0x1030000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0x3000000ULL 
                                              == (0x3010000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x2000000ULL 
                                                == 
                                                (0x2020000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+92,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 0x10U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0x18U))))))))));
    bufp->fullBit(oldp+93,((1U & ((IData)((0x4000000ULL 
                                           == (0x40c0000ULL 
                                               & vlSelf->tb_top__DOT__w_i_data))) 
                                  | ((IData)((0xc000000ULL 
                                              == (0xc040000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))) 
                                     | (IData)((0x8000000ULL 
                                                == 
                                                (0x8080000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+94,((1U & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(
                                                       (vlSelf->tb_top__DOT__w_i_data 
                                                        >> 0x12U)) 
                                               ^ (IData)(
                                                         (vlSelf->tb_top__DOT__w_i_data 
                                                          >> 0x1aU))))))))));
    bufp->fullCData(oldp+95,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x12U)))),2);
    bufp->fullCData(oldp+96,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x1aU)))),2);
    bufp->fullCData(oldp+97,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x10U)))),2);
    bufp->fullCData(oldp+98,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                            >> 0x18U)))),2);
    bufp->fullBit(oldp+99,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+100,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+101,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+102,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+104,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+105,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+106,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+107,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+108,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+109,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+110,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+111,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+112,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+113,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+114,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+115,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+116,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+117,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+118,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+119,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+120,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+121,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+122,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+123,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+124,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+125,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+126,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+127,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+129,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+130,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+131,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+132,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+133,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+134,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+135,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+136,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+137,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+138,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+139,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+140,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+141,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+142,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+143,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+144,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+145,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+146,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+147,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+148,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+149,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+150,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+151,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+152,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+154,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+155,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+156,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+157,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+158,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+159,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+160,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+161,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+162,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+163,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+164,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+165,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+166,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+168,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+169,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+170,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+171,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+172,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+173,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+174,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+175,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+176,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+177,((0xffU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+178,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+179,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+180,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+181,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1),8);
    bufp->fullCData(oldp+182,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+183,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+184,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+185,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+186,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+187,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0),8);
    bufp->fullBit(oldp+188,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+189,((1U & (((IData)((0x40000000000ULL 
                                             == (0x40c00000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                    | ((IData)((0xc0000000000ULL 
                                                == 
                                                (0xc0400000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | (IData)((0x80000000000ULL 
                                                  == 
                                                  (0x80800000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x2aU))))))) 
                                      & ((IData)((0x10000000000ULL 
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
    bufp->fullBit(oldp+190,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 0x22U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x2aU))))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x28U)))))))))));
    bufp->fullBit(oldp+191,((1U & (((IData)((0x400000000000ULL 
                                             == (0x40c000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                    | ((IData)((0xc00000000000ULL 
                                                == 
                                                (0xc04000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | (IData)((0x800000000000ULL 
                                                  == 
                                                  (0x808000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)((0x100000000000ULL 
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
    bufp->fullBit(oldp+192,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x2cU))))))))));
    bufp->fullCData(oldp+193,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+194,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x2cU)))),4);
    bufp->fullBit(oldp+195,((1U & ((IData)((0x100000000000ULL 
                                            == (0x103000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0x300000000000ULL 
                                               == (0x301000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x200000000000ULL 
                                                 == 
                                                 (0x202000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+196,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x24U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x2cU))))))))));
    bufp->fullBit(oldp+197,((1U & ((IData)((0x400000000000ULL 
                                            == (0x40c000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc00000000000ULL 
                                               == (0xc04000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x800000000000ULL 
                                                 == 
                                                 (0x808000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+198,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+199,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x26U)))),2);
    bufp->fullCData(oldp+200,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x2eU)))),2);
    bufp->fullCData(oldp+201,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x24U)))),2);
    bufp->fullCData(oldp+202,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x2cU)))),2);
    bufp->fullCData(oldp+203,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+204,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x28U)))),4);
    bufp->fullBit(oldp+205,((1U & ((IData)((0x10000000000ULL 
                                            == (0x10300000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0x30000000000ULL 
                                               == (0x30100000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x20000000000ULL 
                                                 == 
                                                 (0x20200000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+206,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x20U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x28U))))))))));
    bufp->fullBit(oldp+207,((1U & ((IData)((0x40000000000ULL 
                                            == (0x40c00000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc0000000000ULL 
                                               == (0xc0400000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x80000000000ULL 
                                                 == 
                                                 (0x80800000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+208,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x22U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x2aU))))))))));
    bufp->fullCData(oldp+209,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x22U)))),2);
    bufp->fullCData(oldp+210,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x2aU)))),2);
    bufp->fullCData(oldp+211,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x20U)))),2);
    bufp->fullCData(oldp+212,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x28U)))),2);
    bufp->fullBit(oldp+213,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+214,((1U & (((IData)((0x400000000000000ULL 
                                             == (0x40c000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                    | ((IData)((0xc00000000000000ULL 
                                                == 
                                                (0xc04000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | (IData)((0x800000000000000ULL 
                                                  == 
                                                  (0x808000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(
                                                              (vlSelf->tb_top__DOT__w_i_data 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelf->tb_top__DOT__w_i_data 
                                                                 >> 0x3aU))))))) 
                                      & ((IData)((0x100000000000000ULL 
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
    bufp->fullBit(oldp+215,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & ((IData)(
                                                           (vlSelf->tb_top__DOT__w_i_data 
                                                            >> 0x32U)) 
                                                   ^ (IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x3aU))))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x38U)))))))))));
    bufp->fullBit(oldp+216,((1U & (((IData)((0x4000000000000000ULL 
                                             == (0x40c0000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                    | ((IData)((0xc000000000000000ULL 
                                                == 
                                                (0xc040000000000000ULL 
                                                 & vlSelf->tb_top__DOT__w_i_data))) 
                                       | (IData)((0x8000000000000000ULL 
                                                  == 
                                                  (0x8080000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)((0x1000000000000000ULL 
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
    bufp->fullBit(oldp+217,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & ((IData)(
                                                             (vlSelf->tb_top__DOT__w_i_data 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_top__DOT__w_i_data 
                                                                >> 0x3cU))))))))));
    bufp->fullCData(oldp+218,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+219,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x3cU)))),4);
    bufp->fullBit(oldp+220,((1U & ((IData)((0x1000000000000000ULL 
                                            == (0x1030000000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0x3000000000000000ULL 
                                               == (0x3010000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x2000000000000000ULL 
                                                 == 
                                                 (0x2020000000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+221,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x34U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x3cU))))))))));
    bufp->fullBit(oldp+222,((1U & ((IData)((0x4000000000000000ULL 
                                            == (0x40c0000000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc000000000000000ULL 
                                               == (0xc040000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x8000000000000000ULL 
                                                 == 
                                                 (0x8080000000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+223,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+224,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x36U)))),2);
    bufp->fullCData(oldp+225,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x3eU)))),2);
    bufp->fullCData(oldp+226,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x34U)))),2);
    bufp->fullCData(oldp+227,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x3cU)))),2);
    bufp->fullCData(oldp+228,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+229,((0xfU & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                               >> 0x38U)))),4);
    bufp->fullBit(oldp+230,((1U & ((IData)((0x100000000000000ULL 
                                            == (0x103000000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0x300000000000000ULL 
                                               == (0x301000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x200000000000000ULL 
                                                 == 
                                                 (0x202000000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+231,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x30U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x38U))))))))));
    bufp->fullBit(oldp+232,((1U & ((IData)((0x400000000000000ULL 
                                            == (0x40c000000000000ULL 
                                                & vlSelf->tb_top__DOT__w_i_data))) 
                                   | ((IData)((0xc00000000000000ULL 
                                               == (0xc04000000000000ULL 
                                                   & vlSelf->tb_top__DOT__w_i_data))) 
                                      | (IData)((0x800000000000000ULL 
                                                 == 
                                                 (0x808000000000000ULL 
                                                  & vlSelf->tb_top__DOT__w_i_data))))))));
    bufp->fullBit(oldp+233,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(
                                                        (vlSelf->tb_top__DOT__w_i_data 
                                                         >> 0x32U)) 
                                                ^ (IData)(
                                                          (vlSelf->tb_top__DOT__w_i_data 
                                                           >> 0x3aU))))))))));
    bufp->fullCData(oldp+234,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x32U)))),2);
    bufp->fullCData(oldp+235,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x3aU)))),2);
    bufp->fullCData(oldp+236,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x30U)))),2);
    bufp->fullCData(oldp+237,((3U & (IData)((vlSelf->tb_top__DOT__w_i_data 
                                             >> 0x38U)))),2);
    bufp->fullBit(oldp+238,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+239,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+240,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+241,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+242,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+243,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+244,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+245,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+246,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+247,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+248,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+249,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+250,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+251,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+252,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+253,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),4);
    bufp->fullCData(oldp+254,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+255,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+256,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+257,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+258,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+259,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+260,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+261,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_0))),2);
    bufp->fullCData(oldp+262,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+263,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+264,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+265,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))))))));
    bufp->fullBit(oldp+266,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+268,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+269,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+270,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+271,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+272,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+273,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+274,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+275,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+276,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+277,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+278,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+279,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),4);
    bufp->fullBit(oldp+280,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+281,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)))))))));
    bufp->fullBit(oldp+282,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+283,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+284,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+285,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+286,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+287,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_0_1))),2);
    bufp->fullBit(oldp+288,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+289,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+290,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+291,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+292,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+293,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+294,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+295,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+296,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+297,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+298,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+299,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+300,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+301,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+302,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+303,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+304,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+305,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+306,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+307,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+308,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+309,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+310,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+311,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+312,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_1))),2);
    bufp->fullCData(oldp+313,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_0),8);
    bufp->fullCData(oldp+314,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_0),8);
    bufp->fullCData(oldp+315,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_0),8);
    bufp->fullCData(oldp+316,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_0),8);
    bufp->fullCData(oldp+317,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_2_1),8);
    bufp->fullCData(oldp+318,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_2_1),8);
    bufp->fullCData(oldp+319,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_2),8);
    bufp->fullCData(oldp+320,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_3),8);
    bufp->fullCData(oldp+321,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1),8);
    bufp->fullCData(oldp+322,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2),8);
    bufp->fullCData(oldp+323,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3),8);
    bufp->fullCData(oldp+324,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0),8);
    bufp->fullCData(oldp+325,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1),8);
    bufp->fullCData(oldp+326,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2),8);
    bufp->fullCData(oldp+327,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1),8);
    bufp->fullCData(oldp+328,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2),8);
    bufp->fullCData(oldp+329,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0),8);
    bufp->fullCData(oldp+330,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1),8);
    bufp->fullBit(oldp+331,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__w_compare));
    bufp->fullBit(oldp+332,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+333,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))))))));
    bufp->fullBit(oldp+334,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+335,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+336,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+337,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+338,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+339,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+340,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+341,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+342,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+343,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+344,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+345,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+346,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),4);
    bufp->fullCData(oldp+347,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),4);
    bufp->fullBit(oldp+348,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+349,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)))))))));
    bufp->fullBit(oldp+350,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+351,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+352,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+353,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+354,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_1_0))),2);
    bufp->fullCData(oldp+355,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_1_0))),2);
    bufp->fullBit(oldp+356,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__w_compare));
    bufp->fullBit(oldp+357,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+358,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))))))));
    bufp->fullBit(oldp+359,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+360,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+361,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+362,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+363,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+364,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+365,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+366,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+367,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+368,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+369,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+370,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+371,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),4);
    bufp->fullCData(oldp+372,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),4);
    bufp->fullBit(oldp+373,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+374,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)))))))));
    bufp->fullBit(oldp+375,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+376,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+377,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+378,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+379,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_max_2_0))),2);
    bufp->fullCData(oldp+380,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_max_2_0))),2);
    bufp->fullBit(oldp+381,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__w_compare));
    bufp->fullBit(oldp+382,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+383,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))))))));
    bufp->fullBit(oldp+384,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+385,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+386,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+387,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+388,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+389,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+390,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+391,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+392,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+393,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+394,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+395,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+396,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),4);
    bufp->fullCData(oldp+397,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),4);
    bufp->fullBit(oldp+398,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+399,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)))))))));
    bufp->fullBit(oldp+400,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+401,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+402,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+403,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+404,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_2_0))),2);
    bufp->fullCData(oldp+405,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_2_0))),2);
    bufp->fullBit(oldp+406,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__w_compare));
    bufp->fullBit(oldp+407,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+408,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))))))));
    bufp->fullBit(oldp+409,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+411,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+412,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+413,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+414,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+415,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+416,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_0_3__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+417,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+418,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+419,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+420,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+421,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+422,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),4);
    bufp->fullBit(oldp+423,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+424,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)))))))));
    bufp->fullBit(oldp+425,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+426,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+427,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+428,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+429,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+430,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_4_UNIT_1__DOT__w_data_min_1_1))),2);
    bufp->fullBit(oldp+431,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__w_compare));
    bufp->fullBit(oldp+432,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+433,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))))))));
    bufp->fullBit(oldp+434,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+435,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+436,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+437,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+438,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+439,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+440,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+441,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+442,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+443,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+444,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+445,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+446,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),4);
    bufp->fullCData(oldp+447,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),4);
    bufp->fullBit(oldp+448,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+449,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)))))))));
    bufp->fullBit(oldp+450,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+451,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+452,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+453,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+454,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_0))),2);
    bufp->fullCData(oldp+455,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_1))),2);
    bufp->fullBit(oldp+456,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__w_compare));
    bufp->fullBit(oldp+457,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+458,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))))))));
    bufp->fullBit(oldp+459,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+460,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+461,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+462,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+463,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+464,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+465,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+466,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+467,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+468,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+469,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+470,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+471,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),4);
    bufp->fullCData(oldp+472,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),4);
    bufp->fullBit(oldp+473,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+474,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)))))))));
    bufp->fullBit(oldp+475,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+476,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+477,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+478,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+479,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_1))),2);
    bufp->fullCData(oldp+480,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_2))),2);
    bufp->fullBit(oldp+481,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__w_compare));
    bufp->fullBit(oldp+482,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+483,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))))))));
    bufp->fullBit(oldp+484,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+485,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+486,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+487,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+488,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+489,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+490,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+491,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_1_2__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+492,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+493,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+494,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+495,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+496,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),4);
    bufp->fullCData(oldp+497,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),4);
    bufp->fullBit(oldp+498,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+499,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)))))))));
    bufp->fullBit(oldp+500,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+501,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+502,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+503,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+504,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_0_2))),2);
    bufp->fullCData(oldp+505,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_0_3))),2);
    bufp->fullBit(oldp+506,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__w_compare));
    bufp->fullBit(oldp+507,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+508,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))))))));
    bufp->fullBit(oldp+509,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+510,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+511,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+512,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+513,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+514,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+515,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+516,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_0__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+517,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+518,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+519,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+520,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+521,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),4);
    bufp->fullCData(oldp+522,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),4);
    bufp->fullBit(oldp+523,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+524,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)))))))));
    bufp->fullBit(oldp+525,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+526,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+527,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+528,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+529,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_0))),2);
    bufp->fullCData(oldp+530,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_1))),2);
    bufp->fullBit(oldp+531,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__w_compare));
    bufp->fullBit(oldp+532,((1U & (((IData)(((0U == 
                                              (0xcU 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 2U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 2U)) 
                                        & (IData)((0xcU 
                                                   == 
                                                   (0xcU 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 3U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 3U)))) 
                                   | ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                       ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                      >> 2U))))) 
                                      & ((IData)(((0U 
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
                                                  >> 1U)))))))));
    bufp->fullBit(oldp+533,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                    ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                   >> 2U))))) 
                                   & (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                     ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))))))));
    bufp->fullBit(oldp+534,((1U & (((IData)(((0U == 
                                              (0xc0U 
                                               & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                             & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                                >> 6U))) 
                                    | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                            >> 6U)) 
                                        & (IData)((0xc0U 
                                                   == 
                                                   (0xc0U 
                                                    & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                       | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                              >> 7U)) 
                                          & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                             >> 7U)))) 
                                   | ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                                      & ((IData)(((0U 
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
                                                  >> 5U)))))))));
    bufp->fullBit(oldp+535,(((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high) 
                             & (~ (IData)((0U != (3U 
                                                  & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                      ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                     >> 4U))))))));
    bufp->fullCData(oldp+536,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+537,((0xfU & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+538,((1U & ((IData)(((0U == 
                                             (0x30U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 4U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 4U)) 
                                       & (IData)((0x30U 
                                                  == 
                                                  (0x30U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 5U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 5U)))))));
    bufp->fullBit(oldp+539,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 4U))))))));
    bufp->fullBit(oldp+540,((1U & ((IData)(((0U == 
                                             (0xc0U 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 6U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 6U)) 
                                       & (IData)((0xc0U 
                                                  == 
                                                  (0xc0U 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 7U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 7U)))))));
    bufp->fullBit(oldp+541,(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__CAS_2_1__DOT__COMP_UNIT__DOT__u_high__DOT__w_equal_high));
    bufp->fullCData(oldp+542,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+543,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+544,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+545,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+546,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),4);
    bufp->fullCData(oldp+547,((0xfU & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),4);
    bufp->fullBit(oldp+548,((1U & ((IData)(((0U == 
                                             (3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                   | (((~ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1)) 
                                       & (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                           >> 1U) & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 1U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 1U)))))));
    bufp->fullBit(oldp+549,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)))))))));
    bufp->fullBit(oldp+550,((1U & ((IData)(((0U == 
                                             (0xcU 
                                              & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))) 
                                            & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                               >> 2U))) 
                                   | (((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                           >> 2U)) 
                                       & (IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))))) 
                                      | ((~ ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                             >> 3U)) 
                                         & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                            >> 3U)))))));
    bufp->fullBit(oldp+551,((1U & (~ (IData)((0U != 
                                              (3U & 
                                               (((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                                 ^ (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2)) 
                                                >> 2U))))))));
    bufp->fullCData(oldp+552,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+553,((3U & ((IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+554,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_min_1_1))),2);
    bufp->fullCData(oldp+555,((3U & (IData)(vlSelf->tb_top__DOT__DUT__DOT__DUT__DOT__BN_8_UNIT_0__DOT__w_data_max_1_2))),2);
    bufp->fullQData(oldp+556,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__expected_sorted),64);
    bufp->fullCData(oldp+558,(vlSelf->i_data_a),8);
    bufp->fullCData(oldp+559,(vlSelf->i_data_b),8);
    bufp->fullBit(oldp+560,(vlSelf->o_less));
    bufp->fullBit(oldp+561,(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                             | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                & ((~ ((IData)(vlSelf->i_data_b) 
                                       >> 4U)) & ((IData)(vlSelf->i_data_a) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                             | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                & ((~ ((IData)(vlSelf->i_data_b) 
                                       >> 2U)) & ((IData)(vlSelf->i_data_a) 
                                                  >> 2U))))));
    bufp->fullBit(oldp+564,((1U & (((~ ((IData)(vlSelf->i_data_b) 
                                        >> 1U)) & ((IData)(vlSelf->i_data_a) 
                                                   >> 1U)) 
                                   | ((~ (((~ ((IData)(vlSelf->i_data_b) 
                                               >> 1U)) 
                                           & ((IData)(vlSelf->i_data_a) 
                                              >> 1U)) 
                                          | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                      & ((~ (IData)(vlSelf->i_data_b)) 
                                         & (IData)(vlSelf->i_data_a)))))));
    bufp->fullBit(oldp+565,(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                             | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                & ((~ ((IData)(vlSelf->i_data_a) 
                                       >> 4U)) & ((IData)(vlSelf->i_data_b) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+567,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                             | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                & ((~ ((IData)(vlSelf->i_data_a) 
                                       >> 2U)) & ((IData)(vlSelf->i_data_b) 
                                                  >> 2U))))));
    bufp->fullBit(oldp+568,((1U & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2) 
                                   | ((~ (((~ ((IData)(vlSelf->i_data_b) 
                                               >> 1U)) 
                                           & ((IData)(vlSelf->i_data_a) 
                                              >> 1U)) 
                                          | (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_3__DOT____VdfgRegularize_h96a12798_0_2))) 
                                      & ((~ (IData)(vlSelf->i_data_a)) 
                                         & (IData)(vlSelf->i_data_b)))))));
    bufp->fullBit(oldp+569,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0) 
                             | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0)) 
                                & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_2) 
                                   | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                      & ((~ ((IData)(vlSelf->i_data_a) 
                                             >> 4U)) 
                                         & ((IData)(vlSelf->i_data_b) 
                                            >> 4U))))))));
    bufp->fullBit(oldp+570,((1U & (((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_2) 
                                    | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                       & ((~ ((IData)(vlSelf->i_data_a) 
                                              >> 2U)) 
                                          & ((IData)(vlSelf->i_data_b) 
                                             >> 2U)))) 
                                   | ((~ ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_6) 
                                          | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_2__DOT____VdfgRegularize_h96a12798_0_3) 
                                             & ((~ 
                                                 ((IData)(vlSelf->i_data_b) 
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
    bufp->fullBit(oldp+571,(((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_max_0_0) 
                             | ((~ (IData)(vlSelf->COMP_parallel_prefix_binary__DOT__w_min_0_0)) 
                                & ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_6) 
                                   | ((IData)(vlSelf->COMP_parallel_prefix_binary__DOT__PPBC_black_cell_unit_1__DOT____VdfgRegularize_h96a12798_0_3) 
                                      & ((~ ((IData)(vlSelf->i_data_b) 
                                             >> 4U)) 
                                         & ((IData)(vlSelf->i_data_a) 
                                            >> 4U))))))));
    bufp->fullCData(oldp+572,((3U & ((IData)(vlSelf->i_data_a) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+573,((3U & ((IData)(vlSelf->i_data_b) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+574,((3U & ((IData)(vlSelf->i_data_a) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+575,((3U & ((IData)(vlSelf->i_data_b) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+576,((3U & ((IData)(vlSelf->i_data_a) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+577,((3U & ((IData)(vlSelf->i_data_b) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+578,((3U & (IData)(vlSelf->i_data_a))),2);
    bufp->fullCData(oldp+579,((3U & (IData)(vlSelf->i_data_b))),2);
    bufp->fullBit(oldp+580,(vlSelf->tb_top__DOT__i_clk));
    bufp->fullBit(oldp+581,(vlSelf->tb_top__DOT__i_rst_n));
    bufp->fullCData(oldp+582,(vlSelf->tb_top__DOT__DRIVER__DOT__next_state),2);
    bufp->fullIData(oldp+583,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_count),32);
    bufp->fullIData(oldp+584,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_pass),32);
    bufp->fullBit(oldp+585,(vlSelf->tb_top__DOT__SCOREBOARD__DOT__test_complete));
}
