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
    tracep->declBit(c+275,"clk", false,-1);
    tracep->declBit(c+276,"linetrace", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+275,"clk", false,-1);
    tracep->declBit(c+276,"linetrace", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+271,"istream_rdy", false,-1);
    tracep->declQuad(c+277,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBit(c+272,"ostream_val", false,-1);
    tracep->declBus(c+273,"ostream_msg", false,-1, 31,0);
    tracep->declBit(c+284,"istream_val_f", false,-1);
    tracep->declBit(c+285,"ostream_rdy_f", false,-1);
    tracep->declBus(c+267,"istream_msg_a", false,-1, 31,0);
    tracep->declBus(c+268,"istream_msg_b", false,-1, 31,0);
    tracep->pushNamePrefix("imul ");
    tracep->declBit(c+275,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBit(c+265,"istream_val", false,-1);
    tracep->declBit(c+271,"istream_rdy", false,-1);
    tracep->declQuad(c+277,"istream_msg", false,-1, 63,0);
    tracep->declBit(c+272,"ostream_val", false,-1);
    tracep->declBit(c+266,"ostream_rdy", false,-1);
    tracep->declBus(c+273,"ostream_msg", false,-1, 31,0);
    tracep->declBus(c+279,"a", false,-1, 31,0);
    tracep->declBus(c+280,"b", false,-1, 31,0);
    tracep->declBit(c+281,"next_ostream_val", false,-1);
    tracep->declBus(c+282,"next_ostream_msg", false,-1, 31,0);
    tracep->declArray(c+1,"str", false,-1, 4095,0);
    tracep->declBus(c+129,"idx0", false,-1, 31,0);
    tracep->declBus(c+130,"idx1", false,-1, 31,0);
    tracep->pushNamePrefix("vc_trace ");
    tracep->declBit(c+275,"clk", false,-1);
    tracep->declBit(c+264,"reset", false,-1);
    tracep->declBus(c+131,"len0", false,-1, 31,0);
    tracep->declBus(c+132,"len1", false,-1, 31,0);
    tracep->declBus(c+133,"idx0", false,-1, 31,0);
    tracep->declBus(c+134,"idx1", false,-1, 31,0);
    tracep->declBus(c+286,"nchars", false,-1, 31,0);
    tracep->declBus(c+287,"nbits", false,-1, 31,0);
    tracep->declArray(c+135,"storage", false,-1, 4095,0);
    tracep->declBus(c+263,"cycles_next", false,-1, 31,0);
    tracep->declBus(c+274,"cycles", false,-1, 31,0);
    tracep->declBus(c+283,"level", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+269,"x", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+270,"x", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__istream_rdy));
    bufp->fullBit(oldp+272,(vlSelf->top__DOT__ostream_val));
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__ostream_msg),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    bufp->fullBit(oldp+275,(vlSelf->clk));
    bufp->fullBit(oldp+276,(vlSelf->linetrace));
    bufp->fullQData(oldp+277,(vlSelf->top__DOT__istream_msg),64);
    bufp->fullIData(oldp+279,((IData)((vlSelf->top__DOT__istream_msg 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+280,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->fullBit(oldp+281,(vlSelf->top__DOT__imul__DOT__next_ostream_val));
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__imul__DOT__next_ostream_msg),32);
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
    bufp->fullBit(oldp+284,(vlSelf->top__DOT__istream_val_f));
    bufp->fullBit(oldp+285,(vlSelf->top__DOT__ostream_rdy_f));
    bufp->fullIData(oldp+286,(0x200U),32);
    bufp->fullIData(oldp+287,(0x1000U),32);
}
