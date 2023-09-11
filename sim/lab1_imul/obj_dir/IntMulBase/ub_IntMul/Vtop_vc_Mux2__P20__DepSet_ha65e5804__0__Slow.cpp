// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P20___ctor_var_reset(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___ctor_var_reset\n"); );
    // Body
    vlSelf->in0 = VL_RAND_RESET_I(32);
    vlSelf->in1 = VL_RAND_RESET_I(32);
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
}
