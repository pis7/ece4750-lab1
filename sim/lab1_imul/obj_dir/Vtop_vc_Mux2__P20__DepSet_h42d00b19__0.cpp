// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux\n"); );
    // Body
    vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)
                    ? ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)
                        ? vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__b
                        : 0U) : vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__r_shift_out);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)
                    ? ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)
                        ? vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__a
                        : 0U) : vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__l_shift_out);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__result_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__result_mux__1\n"); );
    // Body
    vlSelf->out = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__result_mux_sel)
                    ? 0U : vlSymsp->TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux.out);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__adder_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__add_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
            vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__result_reg_out;
        } else {
            vlSelf->out = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__adder_out;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}
