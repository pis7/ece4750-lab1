// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux\n"); );
    // Body
    vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___act_comb__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel)
                    ? ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel)
                        ? (IData)(vlSymsp->TOP.top__DOT__istream_msg)
                        : 0U) : (vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_reg.q 
                                 >> 1U));
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel) {
        if (vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___act_comb__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel)
                    ? ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel)
                        ? (IData)((vlSymsp->TOP.top__DOT__istream_msg 
                                   >> 0x20U)) : 0U)
                    : (vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_reg.q 
                       << 1U));
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__a_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel) {
        if (vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__imul__DOT__result_mux_sel) {
        if (vlSymsp->TOP.top__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_comb__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux__0\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__result_mux_sel)
                    ? 0U : vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.out);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel) {
        if (vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_comb__TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux__0\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel)
                    ? ((IData)(vlSymsp->TOP.top__DOT__imul__DOT__add_mux_sel)
                        ? vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_reg.q
                        : 0U) : vlSymsp->TOP.top__DOT__imul__DOT__datapath__DOT__adder_out);
}
