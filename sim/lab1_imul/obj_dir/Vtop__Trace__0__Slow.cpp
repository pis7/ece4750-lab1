// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"linetrace",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"istream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+270,"istream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declQuad(c+294,"istream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+271,"ostream_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+296,"ostream_msg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+304,"istream_val_f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+305,"ostream_rdy_f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+267,"istream_msg_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"istream_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"istream_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+294,"istream_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+271,"ostream_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"ostream_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+296,"ostream_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"b_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"a_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"result_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"result_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"add_mux_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"b_lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+1,"str",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+129,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+130,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"b_lsb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"b_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"a_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"result_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"result_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"add_mux_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"req_val",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"req_rdy",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"resp_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"resp_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+306,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+307,"CALC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+308,"DONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+277,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+298,"nextState",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+278,"counter_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"count_clear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+280,"count_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+281,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+282,"count_is_zero",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cycle_counter ");
    tracep->declBus(c+309,"p_count_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+310,"p_count_clear_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+311,"p_count_max_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"clear",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"increment",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"decrement",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+282,"count_is_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"count_is_max",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"count_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+284,"do_increment",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+312,"do_decrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("count_reg ");
    tracep->declBus(c+309,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+310,"p_reset_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+283,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+294,"req_msg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+296,"resp_msg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"b_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"a_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"result_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"result_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"add_mux_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"b_lsb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,"b_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,"b_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,"r_shift_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,"a_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,"a_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,"l_shift_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,"result_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,"result_reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,"adder_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,"add_mux_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("a_l_shifter ");
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+314,"p_shamt_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+286,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+287,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_r_shifter ");
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+314,"p_shamt_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+276,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+315,"shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+285,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_adder ");
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+286,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+131,"len0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+132,"len1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+133,"idx0",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+134,"idx1",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+316,"nchars",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+317,"nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declArray(c+135,"storage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+288,"cycles",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+303,"level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+269,"x",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+285,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+300,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+287,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+273,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+302,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+291,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+274,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+290,"in0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+275,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+291,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+301,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+292,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+286,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_reg__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_reg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+313,"p_nbits",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+297,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+296,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+289,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("imul ");
    tracep->pushNamePrefix("datapath ");
    tracep->pushNamePrefix("a_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_reg__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->top__DOT__imul__DOT__str),4096);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__imul__DOT__idx0),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__imul__DOT__idx1),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+135,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    bufp->fullBit(oldp+264,(vlSelf->top__DOT__reset));
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__istream_val));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__ostream_rdy));
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__istream_msg_a),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__istream_msg_b),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__ostream_val));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
    bufp->fullIData(oldp+276,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_reg.q),32);
    bufp->fullCData(oldp+277,(vlSelf->top__DOT__imul__DOT__control__DOT__state),2);
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__imul__DOT__control__DOT__counter_en));
    bufp->fullBit(oldp+279,(vlSelf->top__DOT__imul__DOT__control__DOT__count_clear));
    bufp->fullBit(oldp+280,((0x1fU == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__count))));
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__imul__DOT__control__DOT__count),5);
    bufp->fullBit(oldp+282,((0U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__count))));
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__imul__DOT__control__DOT__cycle_counter__DOT__count_next),5);
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__imul__DOT__control__DOT__cycle_counter__DOT__do_increment));
    bufp->fullIData(oldp+285,((vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_reg.q 
                               >> 1U)),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_reg.q),32);
    bufp->fullIData(oldp+287,((vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_reg.q 
                               << 1U)),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.out),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.out),32);
    bufp->fullBit(oldp+292,(vlSelf->clk));
    bufp->fullBit(oldp+293,(vlSelf->linetrace));
    bufp->fullQData(oldp+294,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_reg.q),32);
    bufp->fullBit(oldp+297,(vlSelf->top__DOT__imul__DOT__result_en));
    bufp->fullCData(oldp+298,(vlSelf->top__DOT__imul__DOT__control__DOT__nextState),2);
    bufp->fullIData(oldp+299,((IData)((vlSelf->top__DOT__istream_msg 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+300,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.out),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.out),32);
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__istream_val_f));
    bufp->fullBit(oldp+305,(vlSelf->top__DOT__ostream_rdy_f));
    bufp->fullCData(oldp+306,(0U),2);
    bufp->fullCData(oldp+307,(1U),2);
    bufp->fullCData(oldp+308,(2U),2);
    bufp->fullIData(oldp+309,(5U),32);
    bufp->fullIData(oldp+310,(0U),32);
    bufp->fullIData(oldp+311,(0x1fU),32);
    bufp->fullBit(oldp+312,(0U));
    bufp->fullIData(oldp+313,(0x20U),32);
    bufp->fullIData(oldp+314,(1U),32);
    bufp->fullBit(oldp+315,(1U));
    bufp->fullIData(oldp+316,(0x200U),32);
    bufp->fullIData(oldp+317,(0x1000U),32);
}
