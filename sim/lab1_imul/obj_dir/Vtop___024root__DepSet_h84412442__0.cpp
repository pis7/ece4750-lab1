// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf);
void Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux(Vtop_vc_Mux2__P20* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    Vtop___024root___eval_initial__TOP__1(vlSelf);
    Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux((&vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__b_mux));
    Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux((&vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__a_mux));
    Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__result_mux((&vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__result_mux));
    Vtop_vc_Mux2__P20___eval_initial__TOP__top__DOT__imul__DOT__datapath__DOT__b_mux((&vlSymsp->TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 
        = vlSelf->top__DOT__ostream_val;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str);
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           66);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",64,vlSelf->top__DOT__istream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy 
                    = vlSelf->top__DOT__istream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val 
                    = vlSelf->top__DOT__istream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str,0x00000028);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str,0x00000029);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy 
                    = vlSelf->top__DOT__ostream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val 
                    = vlSelf->top__DOT__ostream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__15__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__17__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__13__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__19__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__21__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__idx0 = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__imul__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__imul__DOT__idx1, vlSelf->top__DOT__imul__DOT__idx0)) {
                    vlSelf->top__DOT__imul__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_IntMul.v", 71, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__test_task__30__a;
    __Vtask_top__DOT__test_task__30__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__30__b;
    __Vtask_top__DOT__test_task__30__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__33__a;
    __Vtask_top__DOT__test_task__33__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__33__b;
    __Vtask_top__DOT__test_task__33__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__38__delay_val;
    __Vtask_top__DOT__delay__38__delay_val = 0;
    IData/*31:0*/ __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i;
    __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__39__a;
    __Vtask_top__DOT__test_task__39__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__39__b;
    __Vtask_top__DOT__test_task__39__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__42__a;
    __Vtask_top__DOT__test_task__42__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__42__b;
    __Vtask_top__DOT__test_task__42__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__45__a;
    __Vtask_top__DOT__test_task__45__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__45__b;
    __Vtask_top__DOT__test_task__45__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__48__a;
    __Vtask_top__DOT__test_task__48__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__48__b;
    __Vtask_top__DOT__test_task__48__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__51__a;
    __Vtask_top__DOT__test_task__51__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__51__b;
    __Vtask_top__DOT__test_task__51__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__54__a;
    __Vtask_top__DOT__test_task__54__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__54__b;
    __Vtask_top__DOT__test_task__54__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__57__a;
    __Vtask_top__DOT__test_task__57__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__57__b;
    __Vtask_top__DOT__test_task__57__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__60__a;
    __Vtask_top__DOT__test_task__60__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__60__b;
    __Vtask_top__DOT__test_task__60__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__63__a;
    __Vtask_top__DOT__test_task__63__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__63__b;
    __Vtask_top__DOT__test_task__63__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__66__a;
    __Vtask_top__DOT__test_task__66__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__66__b;
    __Vtask_top__DOT__test_task__66__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__69__a;
    __Vtask_top__DOT__test_task__69__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__69__b;
    __Vtask_top__DOT__test_task__69__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__72__a;
    __Vtask_top__DOT__test_task__72__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__72__b;
    __Vtask_top__DOT__test_task__72__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__75__a;
    __Vtask_top__DOT__test_task__75__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__75__b;
    __Vtask_top__DOT__test_task__75__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__78__a;
    __Vtask_top__DOT__test_task__78__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__78__b;
    __Vtask_top__DOT__test_task__78__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__81__a;
    __Vtask_top__DOT__test_task__81__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__81__b;
    __Vtask_top__DOT__test_task__81__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__84__a;
    __Vtask_top__DOT__test_task__84__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__84__b;
    __Vtask_top__DOT__test_task__84__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__87__a;
    __Vtask_top__DOT__test_task__87__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__87__b;
    __Vtask_top__DOT__test_task__87__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__90__a;
    __Vtask_top__DOT__test_task__90__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__90__b;
    __Vtask_top__DOT__test_task__90__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__93__a;
    __Vtask_top__DOT__test_task__93__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__93__b;
    __Vtask_top__DOT__test_task__93__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__96__a;
    __Vtask_top__DOT__test_task__96__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__96__b;
    __Vtask_top__DOT__test_task__96__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__99__a;
    __Vtask_top__DOT__test_task__99__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__99__b;
    __Vtask_top__DOT__test_task__99__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__102__a;
    __Vtask_top__DOT__test_task__102__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__102__b;
    __Vtask_top__DOT__test_task__102__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__105__a;
    __Vtask_top__DOT__test_task__105__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__105__b;
    __Vtask_top__DOT__test_task__105__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__108__a;
    __Vtask_top__DOT__test_task__108__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__108__b;
    __Vtask_top__DOT__test_task__108__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__111__a;
    __Vtask_top__DOT__test_task__111__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__111__b;
    __Vtask_top__DOT__test_task__111__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__114__a;
    __Vtask_top__DOT__test_task__114__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__114__b;
    __Vtask_top__DOT__test_task__114__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__117__a;
    __Vtask_top__DOT__test_task__117__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__117__b;
    __Vtask_top__DOT__test_task__117__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__120__a;
    __Vtask_top__DOT__test_task__120__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__120__b;
    __Vtask_top__DOT__test_task__120__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__123__a;
    __Vtask_top__DOT__test_task__123__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__123__b;
    __Vtask_top__DOT__test_task__123__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__126__a;
    __Vtask_top__DOT__test_task__126__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__126__b;
    __Vtask_top__DOT__test_task__126__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__129__a;
    __Vtask_top__DOT__test_task__129__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__129__b;
    __Vtask_top__DOT__test_task__129__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__132__a;
    __Vtask_top__DOT__test_task__132__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__132__b;
    __Vtask_top__DOT__test_task__132__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__135__a;
    __Vtask_top__DOT__test_task__135__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__135__b;
    __Vtask_top__DOT__test_task__135__b = 0;
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__istream_msg_a = 0U;
    vlSelf->top__DOT__istream_msg_b = 0U;
    vlSelf->top__DOT__istream_val = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       88);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       96);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #1\n");
    vlSelf->top__DOT__istream_msg_a = 2U;
    vlSelf->top__DOT__istream_msg_b = 3U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           111);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       112);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       116);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:126: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 126, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       130);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       131);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #2\n");
    vlSelf->top__DOT__istream_msg_a = 4U;
    vlSelf->top__DOT__istream_msg_b = 5U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           145);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       146);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           149);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       150);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:160: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 160, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       165);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #3\n");
    vlSelf->top__DOT__istream_msg_a = 3U;
    vlSelf->top__DOT__istream_msg_b = 4U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           179);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       180);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           183);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xcU == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:194: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 194, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       198);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       199);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #4\n");
    vlSelf->top__DOT__istream_msg_a = 0xaU;
    vlSelf->top__DOT__istream_msg_b = 0xdU;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           213);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       214);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           217);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       218);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x82U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:228: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 228, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       232);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       233);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #5\n");
    __Vtask_top__DOT__test_task__30__b = 7U;
    __Vtask_top__DOT__test_task__30__a = 8U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__30__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__30__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__30__a 
                        * __Vtask_top__DOT__test_task__30__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__30__a,
                          32,__Vtask_top__DOT__test_task__30__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__30__a,
                      32,__Vtask_top__DOT__test_task__30__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       244);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Random Test\n");
    __Vtask_top__DOT__test_task__33__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__33__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                        * __Vtask_top__DOT__test_task__33__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__33__a,
                      32,__Vtask_top__DOT__test_task__33__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 1U;
    __Vtask_top__DOT__test_task__33__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__33__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                        * __Vtask_top__DOT__test_task__33__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__33__a,
                      32,__Vtask_top__DOT__test_task__33__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 2U;
    __Vtask_top__DOT__test_task__33__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__33__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                        * __Vtask_top__DOT__test_task__33__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__33__a,
                      32,__Vtask_top__DOT__test_task__33__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 3U;
    __Vtask_top__DOT__test_task__33__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__33__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                        * __Vtask_top__DOT__test_task__33__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__33__a,
                      32,__Vtask_top__DOT__test_task__33__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 4U;
    __Vtask_top__DOT__test_task__33__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__33__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__33__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__33__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__33__a 
                        * __Vtask_top__DOT__test_task__33__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__33__a,
                          32,__Vtask_top__DOT__test_task__33__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__33__a,
                      32,__Vtask_top__DOT__test_task__33__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 5U;
    VL_WRITEF("P_Test #0 - Test ostream_rdy control\n");
    vlSelf->top__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       270);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__istream_msg_a = 2U;
    vlSelf->top__DOT__istream_msg_b = 3U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "tb_IntMul.v", 
                                       278);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           281);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       282);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:296: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 296, "");
        }
    }
    __Vtask_top__DOT__delay__38__delay_val = VL_URANDOM_RANGE_I(0U, 0x7fU);
    __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i, __Vtask_top__DOT__delay__38__delay_val)) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb_IntMul.v", 
                                           519);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vtask_top__DOT__delay__38__unnamedblk6__DOT__i);
    }
    vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       301);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Start Personal Tests\nP_Test #1 - Combination Of Multiplying Zero, One, and Negitive One\n");
    __Vtask_top__DOT__test_task__39__b = 0U;
    __Vtask_top__DOT__test_task__39__a = 0U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__39__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__39__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__39__a 
                        * __Vtask_top__DOT__test_task__39__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__39__a,
                          32,__Vtask_top__DOT__test_task__39__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__39__a,
                      32,__Vtask_top__DOT__test_task__39__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__42__b = 0U;
    __Vtask_top__DOT__test_task__42__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__42__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__42__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__42__a 
                        * __Vtask_top__DOT__test_task__42__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__42__a,
                          32,__Vtask_top__DOT__test_task__42__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__42__a,
                      32,__Vtask_top__DOT__test_task__42__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__45__b = 1U;
    __Vtask_top__DOT__test_task__45__a = 0U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__48__b = 0U;
    __Vtask_top__DOT__test_task__48__a = 0xffffffffU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__48__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__48__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__48__a 
                        * __Vtask_top__DOT__test_task__48__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__48__a,
                          32,__Vtask_top__DOT__test_task__48__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__48__a,
                      32,__Vtask_top__DOT__test_task__48__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__51__b = 0xffffffffU;
    __Vtask_top__DOT__test_task__51__a = 0U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__51__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__51__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__51__a 
                        * __Vtask_top__DOT__test_task__51__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__51__a,
                          32,__Vtask_top__DOT__test_task__51__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__51__a,
                      32,__Vtask_top__DOT__test_task__51__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       316);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #2 - Every if statement for alt shamt value\n");
    __Vtask_top__DOT__test_task__54__b = 1U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 1U;
    __Vtask_top__DOT__test_task__54__b = 2U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 2U;
    __Vtask_top__DOT__test_task__54__b = 4U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 3U;
    __Vtask_top__DOT__test_task__54__b = 8U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 4U;
    __Vtask_top__DOT__test_task__54__b = 0x10U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 5U;
    __Vtask_top__DOT__test_task__54__b = 0x20U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 6U;
    __Vtask_top__DOT__test_task__54__b = 0x40U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 7U;
    __Vtask_top__DOT__test_task__54__b = 0x80U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 8U;
    __Vtask_top__DOT__test_task__54__b = 0x100U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 9U;
    __Vtask_top__DOT__test_task__54__b = 0x200U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xaU;
    __Vtask_top__DOT__test_task__54__b = 0x400U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xbU;
    __Vtask_top__DOT__test_task__54__b = 0x800U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xcU;
    __Vtask_top__DOT__test_task__54__b = 0x1000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xdU;
    __Vtask_top__DOT__test_task__54__b = 0x2000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xeU;
    __Vtask_top__DOT__test_task__54__b = 0x4000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0xfU;
    __Vtask_top__DOT__test_task__54__b = 0x8000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x10U;
    __Vtask_top__DOT__test_task__54__b = 0x10000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x11U;
    __Vtask_top__DOT__test_task__54__b = 0x20000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x12U;
    __Vtask_top__DOT__test_task__54__b = 0x40000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x13U;
    __Vtask_top__DOT__test_task__54__b = 0x80000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x14U;
    __Vtask_top__DOT__test_task__54__b = 0x100000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x15U;
    __Vtask_top__DOT__test_task__54__b = 0x200000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x16U;
    __Vtask_top__DOT__test_task__54__b = 0x400000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x17U;
    __Vtask_top__DOT__test_task__54__b = 0x800000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x18U;
    __Vtask_top__DOT__test_task__54__b = 0x1000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x19U;
    __Vtask_top__DOT__test_task__54__b = 0x2000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1aU;
    __Vtask_top__DOT__test_task__54__b = 0x4000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1bU;
    __Vtask_top__DOT__test_task__54__b = 0x8000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1cU;
    __Vtask_top__DOT__test_task__54__b = 0x10000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1dU;
    __Vtask_top__DOT__test_task__54__b = 0x20000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1eU;
    __Vtask_top__DOT__test_task__54__b = 0x40000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x1fU;
    __Vtask_top__DOT__test_task__54__b = 0x80000000U;
    __Vtask_top__DOT__test_task__54__a = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__54__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__54__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__54__a 
                        * __Vtask_top__DOT__test_task__54__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__54__a,
                          32,__Vtask_top__DOT__test_task__54__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__54__a,
                      32,__Vtask_top__DOT__test_task__54__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 0x20U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       329);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #3 - Small Negitive Numbers and Small Positive Numbers\n");
    __Vtask_top__DOT__test_task__57__b = 0xaU;
    __Vtask_top__DOT__test_task__57__a = 0xfffffff6U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__57__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__57__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__57__a 
                        * __Vtask_top__DOT__test_task__57__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__57__a,
                          32,__Vtask_top__DOT__test_task__57__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__57__a,
                      32,__Vtask_top__DOT__test_task__57__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__60__b = 0x62dU;
    __Vtask_top__DOT__test_task__60__a = 0xfffff826U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__60__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__60__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__60__a 
                        * __Vtask_top__DOT__test_task__60__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__60__a,
                          32,__Vtask_top__DOT__test_task__60__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__60__a,
                      32,__Vtask_top__DOT__test_task__60__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       341);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #4 - Small Positive Numbers and Small Negitive Numbers\n");
    __Vtask_top__DOT__test_task__63__b = 0xffffffffU;
    __Vtask_top__DOT__test_task__63__a = 0xb01U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__63__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__63__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__63__a 
                        * __Vtask_top__DOT__test_task__63__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__63__a,
                          32,__Vtask_top__DOT__test_task__63__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__63__a,
                      32,__Vtask_top__DOT__test_task__63__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__66__b = 0xffffffa4U;
    __Vtask_top__DOT__test_task__66__a = 0x2dcU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__66__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__66__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__66__a 
                        * __Vtask_top__DOT__test_task__66__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__66__a,
                          32,__Vtask_top__DOT__test_task__66__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__66__a,
                      32,__Vtask_top__DOT__test_task__66__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       353);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #5 - Small Negitive and Small Negitive Numbers\n");
    __Vtask_top__DOT__test_task__69__b = 0xfffffff6U;
    __Vtask_top__DOT__test_task__69__a = 0xffffff40U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__69__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__69__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__69__a 
                        * __Vtask_top__DOT__test_task__69__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__69__a,
                          32,__Vtask_top__DOT__test_task__69__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__69__a,
                      32,__Vtask_top__DOT__test_task__69__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__72__b = 0xfffffebfU;
    __Vtask_top__DOT__test_task__72__a = 0xfffffd81U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__72__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__72__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__72__a 
                        * __Vtask_top__DOT__test_task__72__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__72__a,
                          32,__Vtask_top__DOT__test_task__72__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__72__a,
                      32,__Vtask_top__DOT__test_task__72__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       366);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #6 - Multiplying Large Positive and Large Positive Numbers\n");
    __Vtask_top__DOT__test_task__75__b = 0x7d557U;
    __Vtask_top__DOT__test_task__75__a = 0x1f555U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__75__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__75__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__75__a 
                        * __Vtask_top__DOT__test_task__75__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__75__a,
                          32,__Vtask_top__DOT__test_task__75__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__75__a,
                      32,__Vtask_top__DOT__test_task__75__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__78__b = 0x21d6dU;
    __Vtask_top__DOT__test_task__78__a = 0xfaaafU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__78__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__78__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__78__a 
                        * __Vtask_top__DOT__test_task__78__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__78__a,
                          32,__Vtask_top__DOT__test_task__78__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__78__a,
                      32,__Vtask_top__DOT__test_task__78__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       377);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #7 - Large Positive Numbers and Large Negitive Numbers\n");
    __Vtask_top__DOT__test_task__81__b = 0xfff80001U;
    __Vtask_top__DOT__test_task__81__a = 0x3ffffU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__81__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__81__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__81__a 
                        * __Vtask_top__DOT__test_task__81__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__81__a,
                          32,__Vtask_top__DOT__test_task__81__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__81__a,
                      32,__Vtask_top__DOT__test_task__81__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__84__b = 0xfffa1581U;
    __Vtask_top__DOT__test_task__84__a = 0x2f53fU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__84__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__84__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__84__a 
                        * __Vtask_top__DOT__test_task__84__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__84__a,
                          32,__Vtask_top__DOT__test_task__84__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__84__a,
                      32,__Vtask_top__DOT__test_task__84__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       391);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #8 - Large Negitive Numbers and Large Positive Numbers\n");
    __Vtask_top__DOT__test_task__87__b = 0x63ec1U;
    __Vtask_top__DOT__test_task__87__a = 0xfffa1401U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__87__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__87__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__87__a 
                        * __Vtask_top__DOT__test_task__87__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__87__a,
                          32,__Vtask_top__DOT__test_task__87__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__87__a,
                      32,__Vtask_top__DOT__test_task__87__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__90__b = 0x150923U;
    __Vtask_top__DOT__test_task__90__a = 0xffea32a1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__90__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__90__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__90__a 
                        * __Vtask_top__DOT__test_task__90__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__90__a,
                          32,__Vtask_top__DOT__test_task__90__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__90__a,
                      32,__Vtask_top__DOT__test_task__90__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       403);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #9 - Large Negitive Numbers and Large Negitive Numbers\n");
    __Vtask_top__DOT__test_task__93__b = 0xfffeafaeU;
    __Vtask_top__DOT__test_task__93__a = 0xffe8aff1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__93__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__93__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__93__a 
                        * __Vtask_top__DOT__test_task__93__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__93__a,
                          32,__Vtask_top__DOT__test_task__93__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__93__a,
                      32,__Vtask_top__DOT__test_task__93__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__96__b = 0xfffbab5cU;
    __Vtask_top__DOT__test_task__96__a = 0xfffde521U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__96__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__96__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__96__a 
                        * __Vtask_top__DOT__test_task__96__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__96__a,
                          32,__Vtask_top__DOT__test_task__96__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__96__a,
                      32,__Vtask_top__DOT__test_task__96__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       415);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #10 - Numbers with Low Order Bits Masked Off \n");
    __Vtask_top__DOT__test_task__99__b = 0x1de0U;
    __Vtask_top__DOT__test_task__99__a = 0x1de0U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__99__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__99__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__99__a 
                        * __Vtask_top__DOT__test_task__99__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__99__a,
                          32,__Vtask_top__DOT__test_task__99__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__99__a,
                      32,__Vtask_top__DOT__test_task__99__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__102__b = 0xef8U;
    __Vtask_top__DOT__test_task__102__a = 0x1da8U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__102__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__102__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__102__a 
                        * __Vtask_top__DOT__test_task__102__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__102__a,
                          32,__Vtask_top__DOT__test_task__102__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__102__a,
                      32,__Vtask_top__DOT__test_task__102__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       427);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #11 - Numbers with Middle Bits Masked Off\n");
    __Vtask_top__DOT__test_task__105__b = 0xc0fU;
    __Vtask_top__DOT__test_task__105__a = 0x787U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__105__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__105__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__105__a 
                        * __Vtask_top__DOT__test_task__105__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__105__a,
                          32,__Vtask_top__DOT__test_task__105__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__105__a,
                      32,__Vtask_top__DOT__test_task__105__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__108__b = 0x3e1fU;
    __Vtask_top__DOT__test_task__108__a = 0x3707U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__108__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__108__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__108__a 
                        * __Vtask_top__DOT__test_task__108__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__108__a,
                          32,__Vtask_top__DOT__test_task__108__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__108__a,
                      32,__Vtask_top__DOT__test_task__108__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       440);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #12 - Sparse Numbers with Many Zeros and Few Ones\n");
    __Vtask_top__DOT__test_task__111__b = 0x800U;
    __Vtask_top__DOT__test_task__111__a = 0x1000U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__111__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__111__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__111__a 
                        * __Vtask_top__DOT__test_task__111__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__111__a,
                          32,__Vtask_top__DOT__test_task__111__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__111__a,
                      32,__Vtask_top__DOT__test_task__111__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__114__b = 0x1500U;
    __Vtask_top__DOT__test_task__114__a = 0x2808U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__114__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__114__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__114__a 
                        * __Vtask_top__DOT__test_task__114__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__114__a,
                          32,__Vtask_top__DOT__test_task__114__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__114__a,
                      32,__Vtask_top__DOT__test_task__114__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       453);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #13 - Dense Numbers with Many Ones and Few Zeros\n");
    __Vtask_top__DOT__test_task__117__b = 0x1affU;
    __Vtask_top__DOT__test_task__117__a = 0x3ff7U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__117__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__117__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__117__a 
                        * __Vtask_top__DOT__test_task__117__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__117__a,
                          32,__Vtask_top__DOT__test_task__117__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__117__a,
                      32,__Vtask_top__DOT__test_task__117__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__120__b = 0x7ffU;
    __Vtask_top__DOT__test_task__120__a = 0x7bfU;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__120__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__120__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__120__a 
                        * __Vtask_top__DOT__test_task__120__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__120__a,
                          32,__Vtask_top__DOT__test_task__120__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__120__a,
                      32,__Vtask_top__DOT__test_task__120__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       466);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #14 - Corner Case Testing \n");
    __Vtask_top__DOT__test_task__123__b = 0x80000000U;
    __Vtask_top__DOT__test_task__123__a = 0x40000U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__123__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__123__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__123__a 
                        * __Vtask_top__DOT__test_task__123__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__123__a,
                          32,__Vtask_top__DOT__test_task__123__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__123__a,
                      32,__Vtask_top__DOT__test_task__123__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    __Vtask_top__DOT__test_task__126__b = 0xffff0000U;
    __Vtask_top__DOT__test_task__126__a = 0xffff0000U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__126__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__126__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__126__a 
                        * __Vtask_top__DOT__test_task__126__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__126__a,
                          32,__Vtask_top__DOT__test_task__126__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__126__a,
                      32,__Vtask_top__DOT__test_task__126__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       478);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("P_Test #15 - Random Input and Output Delay\n");
    __Vtask_top__DOT__test_task__129__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__129__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__129__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__129__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__129__a 
                        * __Vtask_top__DOT__test_task__129__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__129__a,
                          32,__Vtask_top__DOT__test_task__129__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__129__a,
                      32,__Vtask_top__DOT__test_task__129__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk3__DOT__x = 1U;
    __Vtask_top__DOT__test_task__129__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__129__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__129__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__129__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__129__a 
                        * __Vtask_top__DOT__test_task__129__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__129__a,
                          32,__Vtask_top__DOT__test_task__129__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__129__a,
                      32,__Vtask_top__DOT__test_task__129__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk3__DOT__x = 2U;
    __Vtask_top__DOT__test_task__129__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__129__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__129__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__129__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__129__a 
                        * __Vtask_top__DOT__test_task__129__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__129__a,
                          32,__Vtask_top__DOT__test_task__129__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__129__a,
                      32,__Vtask_top__DOT__test_task__129__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk3__DOT__x = 3U;
    __Vtask_top__DOT__test_task__132__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__132__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__132__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__132__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__132__a 
                        * __Vtask_top__DOT__test_task__132__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__132__a,
                          32,__Vtask_top__DOT__test_task__132__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__132__a,
                      32,__Vtask_top__DOT__test_task__132__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk4__DOT__x = 1U;
    __Vtask_top__DOT__test_task__132__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__132__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__132__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__132__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__132__a 
                        * __Vtask_top__DOT__test_task__132__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__132__a,
                          32,__Vtask_top__DOT__test_task__132__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__132__a,
                      32,__Vtask_top__DOT__test_task__132__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk4__DOT__x = 2U;
    __Vtask_top__DOT__test_task__132__b = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    __Vtask_top__DOT__test_task__132__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__132__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__132__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__132__a 
                        * __Vtask_top__DOT__test_task__132__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__132__a,
                          32,__Vtask_top__DOT__test_task__132__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__132__a,
                      32,__Vtask_top__DOT__test_task__132__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk4__DOT__x = 3U;
    __Vtask_top__DOT__test_task__135__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__135__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__135__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__135__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__135__a 
                        * __Vtask_top__DOT__test_task__135__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__135__a,
                          32,__Vtask_top__DOT__test_task__135__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__135__a,
                      32,__Vtask_top__DOT__test_task__135__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 1U;
    __Vtask_top__DOT__test_task__135__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__135__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__135__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__135__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__135__a 
                        * __Vtask_top__DOT__test_task__135__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__135__a,
                          32,__Vtask_top__DOT__test_task__135__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__135__a,
                      32,__Vtask_top__DOT__test_task__135__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 2U;
    __Vtask_top__DOT__test_task__135__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__135__a = VL_MULS_III(32, (IData)(0xffffffffU), (IData)(
                                                                                VL_RANDOM_I()));
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       535);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__135__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__135__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           543);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       544);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hb9476d33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "tb_IntMul.v", 
                                                           549);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__135__a 
                        * __Vtask_top__DOT__test_task__135__b) 
                       == vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__135__a,
                          32,__Vtask_top__DOT__test_task__135__b,
                          32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:558: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__135__a,
                      32,__Vtask_top__DOT__test_task__135__b,
                      32,vlSelf->top__DOT__imul__DOT__datapath__DOT__result_reg_out);
            VL_STOP_MT("tb_IntMul.v", 558, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       561);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk5__DOT__x = 3U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       499);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_IntMul.v", 
                                                       503);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Testbench finished at %20# cycles\n",
              64,(((QData)(VL_TIME_UNITED_Q(1)) - 0xaULL) 
                  >> 1U));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_IntMul.v", 
                                       507);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("tb_IntMul.v", 508, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT__ostream_val) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 
        = vlSelf->top__DOT__ostream_val;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_rdy)))) {
                    vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__ostream_rdy) {
                    vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__istream_val)))) {
            vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__istream_val) {
            vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__istream_val)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state))) {
        vlSelf->top__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__imul__DOT__control__DOT__done)
                ? 2U : 1U);
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__state)))) {
        vlSelf->top__DOT__imul__DOT__control__DOT__nextState 
            = ((IData)(vlSelf->top__DOT__ostream_rdy)
                ? 0U : 2U);
    } else {
        VL_STOP_MT("IntMulAlt.v", 315, "");
        vlSelf->top__DOT__imul__DOT__control__DOT__nextState = 0U;
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__control__DOT__nextState) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState)))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__control__DOT____Vtogcov__nextState)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__control__DOT__nextState)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}
