// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__b_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
            vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__b;
        } else {
            vlSelf->out = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__r_shift_out;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DOT__dut__DOT__datapath__DOT__a_mux__0\n"); );
    // Body
    if (vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel) {
        if (vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
            vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__a;
        } else {
            vlSelf->out = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->out = vlSymsp->TOP.top__DOT__dut__DOT__datapath__DOT__l_shift_out;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P20___configure_coverage(Vtop_vc_Mux2__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux2__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1160]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1161]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1162]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1163]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1164]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1165]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1166]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1167]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1168]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1169]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1170]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1171]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1172]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1173]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1174]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1176]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1177]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1178]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1179]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1180]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1181]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1182]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1183]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1184]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1185]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1186]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1187]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1188]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1189]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1190]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1191]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[905]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[906]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[911]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[912]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[913]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[914]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[915]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[916]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[917]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[918]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[919]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[920]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[921]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[922]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[923]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[924]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[925]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[926]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[928]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[929]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[930]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[931]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[932]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[933]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[934]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[935]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P20", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1160]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1161]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1162]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1163]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1164]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1165]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1166]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1167]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1168]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1169]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1170]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1171]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1172]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1173]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1174]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1176]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1177]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1178]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1179]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1180]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1181]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1182]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1183]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1184]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1185]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1186]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1187]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1188]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1189]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1190]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1191]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1626]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P20", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1627]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P20", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1628]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P20", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1629]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P20", "block", "21-23");
}
