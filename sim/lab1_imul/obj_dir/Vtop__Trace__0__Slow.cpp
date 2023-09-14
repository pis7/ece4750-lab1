// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+351,"linetrace", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+351,"linetrace", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBit(c+284,"istream_val", false,-1);
    tracep->declBit(c+285,"istream_rdy", false,-1);
    tracep->declQuad(c+341,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+286,"ostream_rdy", false,-1);
    tracep->declBit(c+287,"ostream_val", false,-1);
    tracep->declBus(c+288,"ostream_msg", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+10+i*2,"src_msgs", true,(i+0), 63,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+16+i*1,"snk_msgs", true,(i+0), 31,0);
    }
    tracep->declBit(c+289,"src_done", false,-1);
    tracep->declBit(c+290,"snk_done", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBit(c+284,"istream_val", false,-1);
    tracep->declBit(c+285,"istream_rdy", false,-1);
    tracep->declQuad(c+341,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+287,"ostream_val", false,-1);
    tracep->declBit(c+286,"ostream_rdy", false,-1);
    tracep->declBus(c+288,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+291,"b_mux_sel", false,-1);
    tracep->declBit(c+292,"a_mux_sel", false,-1);
    tracep->declBit(c+293,"result_mux_sel", false,-1);
    tracep->declBit(c+294,"result_en", false,-1);
    tracep->declBit(c+295,"add_mux_sel", false,-1);
    tracep->declBus(c+296,"b_lsb", false,-1, 31,0);
    tracep->declBus(c+297,"shamt", false,-1, 4,0);
    tracep->declArray(c+21,"str", false,-1, 4095,0);
    tracep->declBus(c+149,"idx0", false,-1, 31,0);
    tracep->declBus(c+150,"idx1", false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+296,"b_lsb", false,-1, 31,0);
    tracep->declBit(c+291,"b_mux_sel", false,-1);
    tracep->declBit(c+292,"a_mux_sel", false,-1);
    tracep->declBit(c+294,"result_en", false,-1);
    tracep->declBit(c+293,"result_mux_sel", false,-1);
    tracep->declBit(c+295,"add_mux_sel", false,-1);
    tracep->declBus(c+297,"shamt", false,-1, 4,0);
    tracep->declBit(c+284,"req_val", false,-1);
    tracep->declBit(c+285,"req_rdy", false,-1);
    tracep->declBit(c+286,"resp_rdy", false,-1);
    tracep->declBit(c+287,"resp_val", false,-1);
    tracep->declBus(c+354,"IDLE", false,-1, 1,0);
    tracep->declBus(c+355,"CALC", false,-1, 1,0);
    tracep->declBus(c+356,"DONE", false,-1, 1,0);
    tracep->declBus(c+298,"state", false,-1, 1,0);
    tracep->declBus(c+299,"nextState", false,-1, 1,0);
    tracep->declBit(c+300,"done", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+301,"temp_shamt", false,-1, 4,0);
    tracep->declBit(c+302,"temp_done", false,-1);
    tracep->declBit(c+303,"temp_add_mux_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declQuad(c+341,"req_msg", false,-1, 63,0);
    tracep->declBus(c+288,"resp_msg", false,-1, 31,0);
    tracep->declBit(c+291,"b_mux_sel", false,-1);
    tracep->declBit(c+292,"a_mux_sel", false,-1);
    tracep->declBit(c+293,"result_mux_sel", false,-1);
    tracep->declBit(c+294,"result_en", false,-1);
    tracep->declBit(c+295,"add_mux_sel", false,-1);
    tracep->declBus(c+297,"shamt", false,-1, 4,0);
    tracep->declBus(c+296,"b_lsb", false,-1, 31,0);
    tracep->declBus(c+343,"a", false,-1, 31,0);
    tracep->declBus(c+344,"b", false,-1, 31,0);
    tracep->declBus(c+345,"b_mux_out", false,-1, 31,0);
    tracep->declBus(c+296,"b_reg_out", false,-1, 31,0);
    tracep->declBus(c+304,"r_shift_out", false,-1, 31,0);
    tracep->declBus(c+346,"a_mux_out", false,-1, 31,0);
    tracep->declBus(c+305,"a_reg_out", false,-1, 31,0);
    tracep->declBus(c+306,"l_shift_out", false,-1, 31,0);
    tracep->declBus(c+307,"result_mux_out", false,-1, 31,0);
    tracep->declBus(c+288,"result_reg_out", false,-1, 31,0);
    tracep->declBus(c+308,"adder_out", false,-1, 31,0);
    tracep->declBus(c+309,"add_mux_out", false,-1, 31,0);
    tracep->pushNamePrefix("a_l_shifter ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+358,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+305,"in", false,-1, 31,0);
    tracep->declBus(c+297,"shamt", false,-1, 4,0);
    tracep->declBus(c+306,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a_reg ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBus(c+305,"q", false,-1, 31,0);
    tracep->declBus(c+346,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_r_shifter ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+358,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+296,"in", false,-1, 31,0);
    tracep->declBus(c+297,"shamt", false,-1, 4,0);
    tracep->declBus(c+304,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_reg ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBus(c+296,"q", false,-1, 31,0);
    tracep->declBus(c+345,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_adder ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+305,"in0", false,-1, 31,0);
    tracep->declBus(c+288,"in1", false,-1, 31,0);
    tracep->declBus(c+308,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+288,"q", false,-1, 31,0);
    tracep->declBus(c+307,"d", false,-1, 31,0);
    tracep->declBit(c+294,"en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+151,"len0", false,-1, 31,0);
    tracep->declBus(c+152,"len1", false,-1, 31,0);
    tracep->declBus(c+153,"idx0", false,-1, 31,0);
    tracep->declBus(c+154,"idx1", false,-1, 31,0);
    tracep->declBus(c+359,"nchars", false,-1, 31,0);
    tracep->declBus(c+360,"nbits", false,-1, 31,0);
    tracep->declArray(c+155,"storage", false,-1, 4095,0);
    tracep->declBus(c+283,"cycles_next", false,-1, 31,0);
    tracep->declBus(c+310,"cycles", false,-1, 31,0);
    tracep->declBus(c+19,"level", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+357,"p_msg_nbits", false,-1, 31,0);
    tracep->declBus(c+361,"p_num_msgs", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+362,"max_delay", false,-1, 31,0);
    tracep->declBit(c+287,"val", false,-1);
    tracep->declBit(c+286,"rdy", false,-1);
    tracep->declBus(c+288,"msg", false,-1, 31,0);
    tracep->declBit(c+290,"done", false,-1);
    tracep->declBit(c+311,"sink_val", false,-1);
    tracep->declBit(c+312,"sink_rdy", false,-1);
    tracep->declBus(c+313,"sink_msg", false,-1, 31,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+357,"p_msg_nbits", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+362,"max_delay", false,-1, 31,0);
    tracep->declBit(c+287,"in_val", false,-1);
    tracep->declBit(c+286,"in_rdy", false,-1);
    tracep->declBus(c+288,"in_msg", false,-1, 31,0);
    tracep->declBit(c+311,"out_val", false,-1);
    tracep->declBit(c+312,"out_rdy", false,-1);
    tracep->declBus(c+313,"out_msg", false,-1, 31,0);
    tracep->declBus(c+314,"rand_num", false,-1, 31,0);
    tracep->declBit(c+315,"rand_delay_en", false,-1);
    tracep->declBus(c+316,"rand_delay_next", false,-1, 31,0);
    tracep->declBus(c+317,"rand_delay", false,-1, 31,0);
    tracep->declBit(c+318,"zero_cycle_delay", false,-1);
    tracep->declBus(c+363,"c_state_sz", false,-1, 31,0);
    tracep->declBus(c+364,"c_state_idle", false,-1, 0,0);
    tracep->declBus(c+365,"c_state_delay", false,-1, 0,0);
    tracep->declBus(c+319,"state_next", false,-1, 0,0);
    tracep->declBus(c+320,"state", false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+362,"p_reset_value", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+317,"q", false,-1, 31,0);
    tracep->declBus(c+316,"d", false,-1, 31,0);
    tracep->declBit(c+315,"en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sink ");
    tracep->declBus(c+357,"p_msg_nbits", false,-1, 31,0);
    tracep->declBus(c+361,"p_num_msgs", false,-1, 31,0);
    tracep->declBus(c+362,"p_sim_mode", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBit(c+311,"val", false,-1);
    tracep->declBit(c+312,"rdy", false,-1);
    tracep->declBus(c+313,"msg", false,-1, 31,0);
    tracep->declBit(c+290,"done", false,-1);
    tracep->declBus(c+366,"c_index_nbits", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"m", true,(i+0), 31,0);
    }
    tracep->declBit(c+321,"index_en", false,-1);
    tracep->declBus(c+322,"index_next", false,-1, 1,0);
    tracep->declBus(c+323,"index", false,-1, 1,0);
    tracep->declBit(c+324,"reset_reg", false,-1);
    tracep->declBit(c+325,"done_next", false,-1);
    tracep->declBit(c+321,"go", false,-1);
    tracep->declBit(c+326,"failed", false,-1);
    tracep->declBus(c+367,"verbose", false,-1, 3,0);
    tracep->declBus(c+347,"m_curr", false,-1, 31,0);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+366,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+354,"p_reset_value", false,-1, 1,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+323,"q", false,-1, 1,0);
    tracep->declBus(c+322,"d", false,-1, 1,0);
    tracep->declBit(c+321,"en", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+368,"p_msg_nbits", false,-1, 31,0);
    tracep->declBus(c+361,"p_num_msgs", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+362,"max_delay", false,-1, 31,0);
    tracep->declBit(c+284,"val", false,-1);
    tracep->declBit(c+285,"rdy", false,-1);
    tracep->declQuad(c+341,"msg", false,-1, 63,0);
    tracep->declBit(c+289,"done", false,-1);
    tracep->declBit(c+327,"src_val", false,-1);
    tracep->declBit(c+328,"src_rdy", false,-1);
    tracep->declQuad(c+348,"src_msg", false,-1, 63,0);
    tracep->pushNamePrefix("msg_delay ");
    tracep->declBus(c+368,"p_msg_nbits", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+362,"max_delay", false,-1, 31,0);
    tracep->declBit(c+327,"in_val", false,-1);
    tracep->declBit(c+328,"in_rdy", false,-1);
    tracep->declQuad(c+348,"in_msg", false,-1, 63,0);
    tracep->declBit(c+284,"out_val", false,-1);
    tracep->declBit(c+285,"out_rdy", false,-1);
    tracep->declQuad(c+341,"out_msg", false,-1, 63,0);
    tracep->declBus(c+329,"rand_num", false,-1, 31,0);
    tracep->declBit(c+330,"rand_delay_en", false,-1);
    tracep->declBus(c+331,"rand_delay_next", false,-1, 31,0);
    tracep->declBus(c+332,"rand_delay", false,-1, 31,0);
    tracep->declBit(c+333,"zero_cycle_delay", false,-1);
    tracep->declBus(c+363,"c_state_sz", false,-1, 31,0);
    tracep->declBus(c+364,"c_state_idle", false,-1, 0,0);
    tracep->declBus(c+365,"c_state_delay", false,-1, 0,0);
    tracep->declBus(c+334,"state_next", false,-1, 0,0);
    tracep->declBus(c+335,"state", false,-1, 0,0);
    tracep->pushNamePrefix("rand_delay_reg ");
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+362,"p_reset_value", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+332,"q", false,-1, 31,0);
    tracep->declBus(c+331,"d", false,-1, 31,0);
    tracep->declBit(c+330,"en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("src ");
    tracep->declBus(c+368,"p_msg_nbits", false,-1, 31,0);
    tracep->declBus(c+361,"p_num_msgs", false,-1, 31,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBit(c+327,"val", false,-1);
    tracep->declBit(c+328,"rdy", false,-1);
    tracep->declQuad(c+348,"msg", false,-1, 63,0);
    tracep->declBit(c+289,"done", false,-1);
    tracep->declBus(c+366,"c_index_nbits", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+4+i*2,"m", true,(i+0), 63,0);
    }
    tracep->declBit(c+336,"index_en", false,-1);
    tracep->declBus(c+337,"index_next", false,-1, 1,0);
    tracep->declBus(c+338,"index", false,-1, 1,0);
    tracep->declBit(c+339,"reset_reg", false,-1);
    tracep->declBit(c+340,"done_next", false,-1);
    tracep->declBit(c+336,"go", false,-1);
    tracep->pushNamePrefix("index_reg ");
    tracep->declBus(c+366,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+354,"p_reset_value", false,-1, 1,0);
    tracep->declBit(c+350,"clk", false,-1);
    tracep->declBit(c+352,"reset", false,-1);
    tracep->declBus(c+338,"q", false,-1, 1,0);
    tracep->declBus(c+337,"d", false,-1, 1,0);
    tracep->declBit(c+336,"en", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("test_case__Vstatic__unnamedblk1 ");
    tracep->declBus(c+20,"idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+353,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+361,"NUM_TESTS", false,-1, 31,0);
    tracep->declBus(c+368,"INPUT_TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+357,"OUTPUT_TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+362,"MAX_SRC_DELAY", false,-1, 31,0);
    tracep->declBus(c+362,"MAX_SNK_DELAY", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+304,"in0", false,-1, 31,0);
    tracep->declBus(c+344,"in1", false,-1, 31,0);
    tracep->declBit(c+291,"sel", false,-1);
    tracep->declBus(c+345,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+306,"in0", false,-1, 31,0);
    tracep->declBus(c+343,"in1", false,-1, 31,0);
    tracep->declBit(c+292,"sel", false,-1);
    tracep->declBus(c+346,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+309,"in0", false,-1, 31,0);
    tracep->declBus(c+362,"in1", false,-1, 31,0);
    tracep->declBit(c+293,"sel", false,-1);
    tracep->declBus(c+307,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+357,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+308,"in0", false,-1, 31,0);
    tracep->declBus(c+288,"in1", false,-1, 31,0);
    tracep->declBit(c+295,"sel", false,-1);
    tracep->declBus(c+309,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("datapath ");
    tracep->pushNamePrefix("a_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__sink__DOT__sink__DOT__m[2]),32);
    bufp->fullQData(oldp+4,(vlSelf->top__DOT__src__DOT__src__DOT__m[0]),64);
    bufp->fullQData(oldp+6,(vlSelf->top__DOT__src__DOT__src__DOT__m[1]),64);
    bufp->fullQData(oldp+8,(vlSelf->top__DOT__src__DOT__src__DOT__m[2]),64);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__src_msgs[0]),64);
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__src_msgs[1]),64);
    bufp->fullQData(oldp+14,(vlSelf->top__DOT__src_msgs[2]),64);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__snk_msgs[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__snk_msgs[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__snk_msgs[2]),32);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__level),4);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx),32);
    bufp->fullWData(oldp+21,(vlSelf->top__DOT__dut__DOT__str),4096);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__dut__DOT__idx0),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__dut__DOT__idx1),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len0),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__len1),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx0),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__idx1),32);
    bufp->fullWData(oldp+155,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__storage),4096);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles_next),32);
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__istream_val));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+286,(vlSelf->top__DOT__ostream_rdy));
    bufp->fullBit(oldp+287,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__dut__DOT__datapath__DOT__result_reg_out),32);
    bufp->fullBit(oldp+289,(vlSelf->top__DOT__src_done));
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__snk_done));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__dut__DOT__b_mux_sel));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT__dut__DOT__a_mux_sel));
    bufp->fullBit(oldp+293,(vlSelf->top__DOT__dut__DOT__result_mux_sel));
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__dut__DOT__result_en));
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__dut__DOT__add_mux_sel));
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__dut__DOT__datapath__DOT__b_reg_out),32);
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__dut__DOT__shamt),5);
    bufp->fullCData(oldp+298,(vlSelf->top__DOT__dut__DOT__control__DOT__state),2);
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__dut__DOT__control__DOT__nextState),2);
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__dut__DOT__control__DOT__done));
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_shamt),5);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_done));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel));
    bufp->fullIData(oldp+304,(vlSelf->top__DOT__dut__DOT__datapath__DOT__r_shift_out),32);
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__dut__DOT__datapath__DOT__a_reg_out),32);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__dut__DOT__datapath__DOT__l_shift_out),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__top__DOT__dut__DOT__datapath__DOT__result_mux.out),32);
    bufp->fullIData(oldp+308,(vlSelf->top__DOT__dut__DOT__datapath__DOT__adder_out),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux.out),32);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__dut__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+311,(vlSelf->top__DOT__sink__DOT__sink_val));
    bufp->fullBit(oldp+312,(vlSelf->top__DOT__sink__DOT__sink_rdy));
    bufp->fullIData(oldp+313,(vlSelf->top__DOT__sink__DOT__sink_msg),32);
    bufp->fullIData(oldp+314,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num),32);
    bufp->fullBit(oldp+315,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+316,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+317,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+318,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+319,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+320,(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+321,(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en));
    bufp->fullCData(oldp+322,((3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)))),2);
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__sink__DOT__sink__DOT__index),2);
    bufp->fullBit(oldp+324,(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg));
    bufp->fullBit(oldp+325,(vlSelf->top__DOT__sink__DOT__sink__DOT__done_next));
    bufp->fullBit(oldp+326,(vlSelf->top__DOT__sink__DOT__sink__DOT__failed));
    bufp->fullBit(oldp+327,(vlSelf->top__DOT__src__DOT__src_val));
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__src__DOT__src_rdy));
    bufp->fullIData(oldp+329,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num),32);
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en));
    bufp->fullIData(oldp+331,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next),32);
    bufp->fullIData(oldp+332,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay),32);
    bufp->fullBit(oldp+333,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay));
    bufp->fullBit(oldp+334,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next));
    bufp->fullBit(oldp+335,(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state));
    bufp->fullBit(oldp+336,(vlSelf->top__DOT__src__DOT__src__DOT__index_en));
    bufp->fullCData(oldp+337,((3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)))),2);
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__src__DOT__src__DOT__index),2);
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg));
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__src__DOT__src__DOT__done_next));
    bufp->fullQData(oldp+341,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullIData(oldp+343,(vlSelf->top__DOT__dut__DOT__datapath__DOT__a),32);
    bufp->fullIData(oldp+344,(vlSelf->top__DOT__dut__DOT__datapath__DOT__b),32);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__top__DOT__dut__DOT__datapath__DOT__b_mux.out),32);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__top__DOT__dut__DOT__datapath__DOT__a_mux.out),32);
    bufp->fullIData(oldp+347,(vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr),32);
    bufp->fullQData(oldp+348,(vlSelf->top__DOT__src__DOT__src_msg),64);
    bufp->fullBit(oldp+350,(vlSelf->clk));
    bufp->fullBit(oldp+351,(vlSelf->linetrace));
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__reset));
    bufp->fullIData(oldp+353,(vlSelf->top__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+354,(0U),2);
    bufp->fullCData(oldp+355,(1U),2);
    bufp->fullCData(oldp+356,(2U),2);
    bufp->fullIData(oldp+357,(0x20U),32);
    bufp->fullIData(oldp+358,(5U),32);
    bufp->fullIData(oldp+359,(0x200U),32);
    bufp->fullIData(oldp+360,(0x1000U),32);
    bufp->fullIData(oldp+361,(3U),32);
    bufp->fullIData(oldp+362,(0U),32);
    bufp->fullIData(oldp+363,(1U),32);
    bufp->fullBit(oldp+364,(0U));
    bufp->fullBit(oldp+365,(1U));
    bufp->fullIData(oldp+366,(2U),32);
    bufp->fullCData(oldp+367,(vlSelf->top__DOT__sink__DOT__sink__DOT__verbose),4);
    bufp->fullIData(oldp+368,(0x40U),32);
}
