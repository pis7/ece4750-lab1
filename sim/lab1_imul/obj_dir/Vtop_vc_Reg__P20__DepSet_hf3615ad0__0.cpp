// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Reg__P20.h"

VL_INLINE_OPT void Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__b_reg__0(Vtop_vc_Reg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__b_reg__0\n"); );
    // Body
    vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
    vlSelf->q = vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.out;
}

VL_INLINE_OPT void Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__a_reg__0(Vtop_vc_Reg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__a_reg__0\n"); );
    // Body
    vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
    vlSelf->q = vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.out;
}

VL_INLINE_OPT void Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__result_reg__0(Vtop_vc_Reg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Reg__P20___nba_sequent__TOP__top__DOT__imul__DOT__datapath__DOT__result_reg__0\n"); );
    // Body
    vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
    vlSelf->q = vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.out;
}
