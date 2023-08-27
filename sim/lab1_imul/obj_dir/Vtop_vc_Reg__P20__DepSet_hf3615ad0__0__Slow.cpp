// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Reg__P20.h"

VL_ATTR_COLD void Vtop_vc_Reg__P20___configure_coverage(Vtop_vc_Reg__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Reg__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../vc/regs.v", 23, 30, "", "v_toggle/vc_Reg__P20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../vc/regs.v", 24, 30, "", "v_toggle/vc_Reg__P20", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "../vc/regs.v", 25, 30, "", "v_toggle/vc_Reg__P20", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "../vc/regs.v", 28, 3, "", "v_line/vc_Reg__P20", "block", "28-29");
}
