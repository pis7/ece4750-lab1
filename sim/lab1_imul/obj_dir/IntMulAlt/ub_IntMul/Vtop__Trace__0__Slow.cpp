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
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+293,"linetrace", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+293,"linetrace", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+270,"istream_rdy", false,-1);
    tracep->declQuad(c+294,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBit(c+271,"ostream_val", false,-1);
    tracep->declBus(c+272,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+302,"istream_val_f", false,-1);
    tracep->declBit(c+303,"ostream_rdy_f", false,-1);
    tracep->declBus(c+267,"istream_msg_a", false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b", false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+270,"istream_rdy", false,-1);
    tracep->declQuad(c+294,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+271,"ostream_val", false,-1);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBus(c+272,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+273,"b_mux_sel", false,-1);
    tracep->declBit(c+274,"a_mux_sel", false,-1);
    tracep->declBit(c+275,"result_mux_sel", false,-1);
    tracep->declBit(c+276,"result_en", false,-1);
    tracep->declBit(c+277,"add_mux_sel", false,-1);
    tracep->declBus(c+278,"b_lsb", false,-1, 31,0);
    tracep->declBus(c+279,"shamt", false,-1, 4,0);
    tracep->declArray(c+1,"str", false,-1, 4095,0);
    tracep->declBus(c+129,"idx0", false,-1, 31,0);
    tracep->declBus(c+130,"idx1", false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+278,"b_lsb", false,-1, 31,0);
    tracep->declBit(c+273,"b_mux_sel", false,-1);
    tracep->declBit(c+274,"a_mux_sel", false,-1);
    tracep->declBit(c+276,"result_en", false,-1);
    tracep->declBit(c+275,"result_mux_sel", false,-1);
    tracep->declBit(c+277,"add_mux_sel", false,-1);
    tracep->declBus(c+279,"shamt", false,-1, 4,0);
    tracep->declBit(c+265,"req_val", false,-1);
    tracep->declBit(c+270,"req_rdy", false,-1);
    tracep->declBit(c+266,"resp_rdy", false,-1);
    tracep->declBit(c+271,"resp_val", false,-1);
    tracep->declBus(c+304,"IDLE", false,-1, 1,0);
    tracep->declBus(c+305,"CALC", false,-1, 1,0);
    tracep->declBus(c+306,"DONE", false,-1, 1,0);
    tracep->declBus(c+280,"state", false,-1, 1,0);
    tracep->declBus(c+296,"nextState", false,-1, 1,0);
    tracep->declBit(c+281,"done", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+282,"temp_shamt", false,-1, 4,0);
    tracep->declBit(c+283,"temp_done", false,-1);
    tracep->declBit(c+284,"temp_add_mux_sel", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declQuad(c+294,"req_msg", false,-1, 63,0);
    tracep->declBus(c+272,"resp_msg", false,-1, 31,0);
    tracep->declBit(c+273,"b_mux_sel", false,-1);
    tracep->declBit(c+274,"a_mux_sel", false,-1);
    tracep->declBit(c+275,"result_mux_sel", false,-1);
    tracep->declBit(c+276,"result_en", false,-1);
    tracep->declBit(c+277,"add_mux_sel", false,-1);
    tracep->declBus(c+279,"shamt", false,-1, 4,0);
    tracep->declBus(c+278,"b_lsb", false,-1, 31,0);
    tracep->declBus(c+297,"a", false,-1, 31,0);
    tracep->declBus(c+298,"b", false,-1, 31,0);
    tracep->declBus(c+299,"b_mux_out", false,-1, 31,0);
    tracep->declBus(c+278,"b_reg_out", false,-1, 31,0);
    tracep->declBus(c+285,"r_shift_out", false,-1, 31,0);
    tracep->declBus(c+300,"a_mux_out", false,-1, 31,0);
    tracep->declBus(c+286,"a_reg_out", false,-1, 31,0);
    tracep->declBus(c+287,"l_shift_out", false,-1, 31,0);
    tracep->declBus(c+288,"result_mux_out", false,-1, 31,0);
    tracep->declBus(c+272,"result_reg_out", false,-1, 31,0);
    tracep->declBus(c+289,"adder_out", false,-1, 31,0);
    tracep->declBus(c+290,"add_mux_out", false,-1, 31,0);
    tracep->pushNamePrefix("a_l_shifter ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+308,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+286,"in", false,-1, 31,0);
    tracep->declBus(c+279,"shamt", false,-1, 4,0);
    tracep->declBus(c+287,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a_reg ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBus(c+286,"q", false,-1, 31,0);
    tracep->declBus(c+300,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_r_shifter ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+308,"p_shamt_nbits", false,-1, 31,0);
    tracep->declBus(c+278,"in", false,-1, 31,0);
    tracep->declBus(c+279,"shamt", false,-1, 4,0);
    tracep->declBus(c+285,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b_reg ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBus(c+278,"q", false,-1, 31,0);
    tracep->declBus(c+299,"d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_adder ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+286,"in0", false,-1, 31,0);
    tracep->declBus(c+272,"in1", false,-1, 31,0);
    tracep->declBus(c+289,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_reg ");
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+272,"q", false,-1, 31,0);
    tracep->declBus(c+288,"d", false,-1, 31,0);
    tracep->declBit(c+276,"en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+292,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+131,"len0", false,-1, 31,0);
    tracep->declBus(c+132,"len1", false,-1, 31,0);
    tracep->declBus(c+133,"idx0", false,-1, 31,0);
    tracep->declBus(c+134,"idx1", false,-1, 31,0);
    tracep->declBus(c+309,"nchars", false,-1, 31,0);
    tracep->declBus(c+310,"nbits", false,-1, 31,0);
    tracep->declArray(c+135,"storage", false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next", false,-1, 31,0);
    tracep->declBus(c+291,"cycles", false,-1, 31,0);
    tracep->declBus(c+301,"level", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+269,"x", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+285,"in0", false,-1, 31,0);
    tracep->declBus(c+298,"in1", false,-1, 31,0);
    tracep->declBit(c+273,"sel", false,-1);
    tracep->declBus(c+299,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+287,"in0", false,-1, 31,0);
    tracep->declBus(c+297,"in1", false,-1, 31,0);
    tracep->declBit(c+274,"sel", false,-1);
    tracep->declBus(c+300,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+290,"in0", false,-1, 31,0);
    tracep->declBus(c+311,"in1", false,-1, 31,0);
    tracep->declBit(c+275,"sel", false,-1);
    tracep->declBus(c+288,"out", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+307,"p_nbits", false,-1, 31,0);
    tracep->declBus(c+289,"in0", false,-1, 31,0);
    tracep->declBus(c+272,"in1", false,-1, 31,0);
    tracep->declBit(c+277,"sel", false,-1);
    tracep->declBus(c+290,"out", false,-1, 31,0);
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
    bufp->fullBit(oldp+270,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
    bufp->fullBit(oldp+273,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
    bufp->fullBit(oldp+274,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
    bufp->fullBit(oldp+276,(vlSelf->top__DOT__imul__DOT__result_en));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__imul__DOT__shamt),5);
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__imul__DOT__control__DOT__state),2);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__imul__DOT__control__DOT__done));
    bufp->fullCData(oldp+282,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt),5);
    bufp->fullBit(oldp+283,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done));
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel));
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__imul__DOT__datapath__DOT__r_shift_out),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__imul__DOT__datapath__DOT__l_shift_out),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.out),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.out),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+292,(vlSelf->clk));
    bufp->fullBit(oldp+293,(vlSelf->linetrace));
    bufp->fullQData(oldp+294,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullCData(oldp+296,(vlSelf->top__DOT__imul__DOT__control__DOT__nextState),2);
    bufp->fullIData(oldp+297,((IData)((vlSelf->top__DOT__istream_msg 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+298,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.out),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.out),32);
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__istream_val_f));
    bufp->fullBit(oldp+303,(vlSelf->top__DOT__ostream_rdy_f));
    bufp->fullCData(oldp+304,(0U),2);
    bufp->fullCData(oldp+305,(1U),2);
    bufp->fullCData(oldp+306,(2U),2);
    bufp->fullIData(oldp+307,(0x20U),32);
    bufp->fullIData(oldp+308,(5U),32);
    bufp->fullIData(oldp+309,(0x200U),32);
    bufp->fullIData(oldp+310,(0x1000U),32);
    bufp->fullIData(oldp+311,(0U),32);
}
