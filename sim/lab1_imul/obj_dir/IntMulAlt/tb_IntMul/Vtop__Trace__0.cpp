// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__imul__DOT__str),4096);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__imul__DOT__idx0),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__imul__DOT__idx1),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1),32);
        bufp->chgWData(oldp+134,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage),4096);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+263,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+264,(vlSelf->top__DOT__istream_val));
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__ostream_rdy));
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__istream_msg_a),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__istream_msg_b),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__unnamedblk2__DOT__x),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+270,(vlSelf->top__DOT__istream_rdy));
        bufp->chgBit(oldp+271,(vlSelf->top__DOT__ostream_val));
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out),32);
        bufp->chgBit(oldp+273,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
        bufp->chgBit(oldp+274,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__imul__DOT__result_en));
        bufp->chgBit(oldp+277,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__imul__DOT__datapath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+279,(vlSelf->top__DOT__imul__DOT__shamt),5);
        bufp->chgCData(oldp+280,(vlSelf->top__DOT__imul__DOT__control__DOT__state),2);
        bufp->chgBit(oldp+281,(vlSelf->top__DOT__imul__DOT__control__DOT__done));
        bufp->chgCData(oldp+282,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_shamt),5);
        bufp->chgBit(oldp+283,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_done));
        bufp->chgBit(oldp+284,(vlSelf->top__DOT__imul__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel));
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__imul__DOT__datapath__DOT__r_shift_out),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__imul__DOT__datapath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__imul__DOT__datapath__DOT__l_shift_out),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.out),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__imul__DOT__datapath__DOT__adder_out),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.out),32);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles),32);
    }
    bufp->chgBit(oldp+292,(vlSelf->clk));
    bufp->chgBit(oldp+293,(vlSelf->linetrace));
    bufp->chgQData(oldp+294,(vlSelf->top__DOT__istream_msg),64);
    bufp->chgCData(oldp+296,(vlSelf->top__DOT__imul__DOT__control__DOT__nextState),2);
    bufp->chgIData(oldp+297,((IData)((vlSelf->top__DOT__istream_msg 
                                      >> 0x20U))),32);
    bufp->chgIData(oldp+298,((IData)(vlSelf->top__DOT__istream_msg)),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.out),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.out),32);
    bufp->chgCData(oldp+301,(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
