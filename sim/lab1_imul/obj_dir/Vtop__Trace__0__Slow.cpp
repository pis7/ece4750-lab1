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
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+300,"linetrace", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+300,"linetrace", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+274,"istream_rdy", false,-1);
    tracep->declQuad(c+301,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBit(c+275,"ostream_val", false,-1);
    tracep->declBus(c+276,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+309,"istream_val_f", false,-1);
    tracep->declBit(c+310,"ostream_rdy_f", false,-1);
    tracep->declBus(c+267,"istream_msg_a", false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b", false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+274,"istream_rdy", false,-1);
    tracep->declQuad(c+301,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+275,"ostream_val", false,-1);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBus(c+276,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+277,"b_mux_sel", false,-1);
    tracep->declBit(c+278,"a_mux_sel", false,-1);
    tracep->declBit(c+279,"result_mux_sel", false,-1);
    tracep->declBit(c+280,"result_en", false,-1);
    tracep->declBit(c+281,"add_mux_sel", false,-1);
    tracep->declBus(c+282,"b_lsb", false,-1, 31,0);
    tracep->declArray(c+1,"str", false,-1, 4095,0);
    tracep->declBus(c+129,"idx0", false,-1, 31,0);
    tracep->declBus(c+130,"idx1", false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+282,"b_lsb", false,-1, 31,0);
    tracep->declBit(c+277,"b_mux_sel", false,-1);
    tracep->declBit(c+278,"a_mux_sel", false,-1);
    tracep->declBit(c+280,"result_en", false,-1);
    tracep->declBit(c+279,"result_mux_sel", false,-1);
    tracep->declBit(c+281,"add_mux_sel", false,-1);
    tracep->declBit(c+265,"req_val", false,-1);
    tracep->declBit(c+274,"req_rdy", false,-1);
    tracep->declBit(c+266,"resp_rdy", false,-1);
    tracep->declBit(c+275,"resp_val", false,-1);
    tracep->declBus(c+311,"IDLE", false,-1, 1,0);
    tracep->declBus(c+312,"CALC", false,-1, 1,0);
    tracep->declBus(c+313,"DONE", false,-1, 1,0);
    tracep->declBus(c+283,"state", false,-1, 1,0);
    tracep->declBus(c+303,"nextState", false,-1, 1,0);
    tracep->declBit(c+284,"counter_en", false,-1);
    tracep->declBit(c+285,"count_clear", false,-1);
    tracep->declBit(c+286,"count_done", false,-1);
    tracep->declBit(c+287,"count_is_zero", false,-1);
    tracep->declBus(c+288,"count", false,-1, 5,0);
    tracep->pushNamePrefix("cycle_counter ");
    tracep->declBus(c+314,"p_count_nbits", false,-1, 31,0);
    tracep->declBus(c+315,"p_count_clear_value", false,-1, 31,0);
    tracep->declBus(c+316,"p_count_max_value", false,-1, 31,0);
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+285,"clear", false,-1);
    tracep->declBit(c+284,"increment", false,-1);
    tracep->declBit(c+317,"decrement", false,-1);
    tracep->declBus(c+288,"count", false,-1, 5,0);
    tracep->declBit(c+287,"count_is_zero", false,-1);
    tracep->declBit(c+286,"count_is_max", false,-1);
    tracep->declBus(c+289,"count_next", false,-1, 5,0);
    tracep->declBit(c+290,"do_increment", false,-1);
    tracep->declBit(c+317,"do_decrement", false,-1);
    tracep->pushNamePrefix("count_reg ");
    tracep->declBus(c+314,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+315,"p_reset_value", false,-1, 31,0);
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+288,"q", false,-1, 5,0);
    tracep->declBus(c+289,"d", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+291,"temp_add_mux", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declQuad(c+301,"req_msg", false,-1, 63,0);
    tracep->declBus(c+276,"resp_msg", false,-1, 31,0);
    tracep->declBit(c+277,"b_mux_sel", false,-1);
    tracep->declBit(c+278,"a_mux_sel", false,-1);
    tracep->declBit(c+279,"result_mux_sel", false,-1);
    tracep->declBit(c+280,"result_en", false,-1);
    tracep->declBit(c+281,"add_mux_sel", false,-1);
    tracep->declBus(c+282,"b_lsb", false,-1, 31,0);
    tracep->declBus(c+304,"a", false,-1, 31,0);
    tracep->declBus(c+305,"b", false,-1, 31,0);
    tracep->declBus(c+306,"b_mux_out", false,-1, 31,0);
    tracep->declBus(c+282,"b_reg_out", false,-1, 31,0);
    tracep->declBus(c+292,"r_shift_out", false,-1, 31,0);
    tracep->declBus(c+307,"a_mux_out", false,-1, 31,0);
    tracep->declBus(c+293,"a_reg_out", false,-1, 31,0);
    tracep->declBus(c+294,"l_shift_out", false,-1, 31,0);
    tracep->declBus(c+295,"result_mux_out", false,-1, 31,0);
    tracep->declBus(c+276,"result_reg_out", false,-1, 31,0);
    tracep->declBus(c+296,"adder_out", false,-1, 31,0);
    tracep->declBus(c+297,"add_mux_out", false,-1, 31,0);
    tracep->pushNamePrefix("a_l_shifter ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+319,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+293,"in", false,-1, 31,0);
    tracep->declBus(c+320,"shamt", false,-1, 4,0);
    tracep->declBus(c+294,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a_reg ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBus(c+293,"q", false,-1, 31,0);
    tracep->declBus(c+307,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_r_shifter ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+319,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+282,"in", false,-1, 31,0);
    tracep->declBus(c+320,"shamt", false,-1, 4,0);
    tracep->declBus(c+292,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_reg ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBus(c+282,"q", false,-1, 31,0);
    tracep->declBus(c+306,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_adder ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+293,"in0", false,-1, 31,0);
    tracep->declBus(c+276,"in1", false,-1, 31,0);
    tracep->declBus(c+296,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg ");
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+276,"q", false,-1, 31,0);
    tracep->declBus(c+295,"d", false,-1, 31,0);
    tracep->declBit(c+280,"en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+299,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+131,"len0", false,-1, 31,0);
    tracep->declBus(c+132,"len1", false,-1, 31,0);
    tracep->declBus(c+133,"idx0", false,-1, 31,0);
    tracep->declBus(c+134,"idx1", false,-1, 31,0);
    tracep->declBus(c+321,"nchars", false,-1, 31,0);
    tracep->declBus(c+322,"nbits", false,-1, 31,0);
    tracep->declArray(c+135,"storage", false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next", false,-1, 31,0);
    tracep->declBus(c+298,"cycles", false,-1, 31,0);
    tracep->declBus(c+308,"level", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+269,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+270,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+271,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+272,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+273,"x", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+292,"in0", false,-1, 31,0);
    tracep->declBus(c+305,"in1", false,-1, 31,0);
    tracep->declBit(c+277,"sel", false,-1);
    tracep->declBus(c+306,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+294,"in0", false,-1, 31,0);
    tracep->declBus(c+304,"in1", false,-1, 31,0);
    tracep->declBit(c+278,"sel", false,-1);
    tracep->declBus(c+307,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+297,"in0", false,-1, 31,0);
    tracep->declBus(c+315,"in1", false,-1, 31,0);
    tracep->declBit(c+279,"sel", false,-1);
    tracep->declBus(c+295,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+318,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+296,"in0", false,-1, 31,0);
    tracep->declBus(c+276,"in1", false,-1, 31,0);
    tracep->declBit(c+281,"sel", false,-1);
    tracep->declBus(c+297,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
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
    tracep->pushNamePrefix("adder_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(vlSelf, tracep);
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
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__unnamedblk2__DOT__x),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__unnamedblk3__DOT__x),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__unnamedblk4__DOT__x),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__unnamedblk5__DOT__x),32);
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
    bufp->fullBit(oldp+279,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
    bufp->fullBit(oldp+280,(vlSelf->top__DOT__imul__DOT__result_en));
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__imul__DOT__control__DOT__state),2);
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__imul__DOT__control__DOT__counter_en));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__imul__DOT__control__DOT__count_clear));
    bufp->fullBit(oldp+286,((0x1fU == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__count))));
    bufp->fullBit(oldp+287,((0U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__count))));
    bufp->fullCData(oldp+288,(vlSelf->top__DOT__imul__DOT__control__DOT__count),6);
    bufp->fullCData(oldp+289,(vlSelf->top__DOT__imul__DOT__control__DOT__cycle_counter__DOT__count_next),6);
    bufp->fullBit(oldp+290,(vlSelf->top__DOT__imul__DOT__control__DOT__cycle_counter__DOT__do_increment));
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux));
    bufp->fullIData(oldp+292,((vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out 
                               >> 1U)),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
    bufp->fullIData(oldp+294,((vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out 
                               << 1U)),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.out),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.out),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+299,(vlSelf->clk));
    bufp->fullBit(oldp+300,(vlSelf->linetrace));
    bufp->fullQData(oldp+301,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__imul__DOT__control__DOT__nextState),2);
    bufp->fullIData(oldp+304,((IData)((vlSelf->top__DOT__istream_msg 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+305,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.out),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.out),32);
    bufp->fullCData(oldp+308,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__istream_val_f));
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__ostream_rdy_f));
    bufp->fullCData(oldp+311,(0U),2);
    bufp->fullCData(oldp+312,(1U),2);
    bufp->fullCData(oldp+313,(2U),2);
    bufp->fullIData(oldp+314,(6U),32);
    bufp->fullIData(oldp+315,(0U),32);
    bufp->fullIData(oldp+316,(0x1fU),32);
    bufp->fullBit(oldp+317,(0U));
    bufp->fullIData(oldp+318,(0x20U),32);
    bufp->fullIData(oldp+319,(5U),32);
    bufp->fullCData(oldp+320,(1U),5);
    bufp->fullIData(oldp+321,(0x200U),32);
    bufp->fullIData(oldp+322,(0x1000U),32);
}
