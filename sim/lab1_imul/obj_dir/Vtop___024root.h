// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;
class Vtop_vc_Mux2__P20;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop_vc_Mux2__P20* __PVT__top__DOT__dut__DOT__datapath__DOT__b_mux;
    Vtop_vc_Mux2__P20* __PVT__top__DOT__dut__DOT__datapath__DOT__a_mux;
    Vtop_vc_Mux2__P20* __PVT__top__DOT__dut__DOT__datapath__DOT__result_mux;
    Vtop_vc_Mux2__P20* __PVT__top__DOT__dut__DOT__datapath__DOT__adder_mux;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(linetrace,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__istream_val;
        CData/*0:0*/ top__DOT__istream_rdy;
        CData/*0:0*/ top__DOT__ostream_rdy;
        CData/*0:0*/ top__DOT__ostream_val;
        CData/*0:0*/ top__DOT__src_done;
        CData/*0:0*/ top__DOT__snk_done;
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__linetrace;
        CData/*0:0*/ top__DOT____Vtogcov__reset;
        CData/*0:0*/ top__DOT____Vtogcov__istream_val;
        CData/*0:0*/ top__DOT____Vtogcov__istream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__ostream_rdy;
        CData/*0:0*/ top__DOT____Vtogcov__ostream_val;
        CData/*0:0*/ top__DOT____Vtogcov__src_done;
        CData/*0:0*/ top__DOT____Vtogcov__snk_done;
        CData/*0:0*/ top__DOT__src__DOT__src_val;
        CData/*0:0*/ top__DOT__src__DOT__src_rdy;
        CData/*0:0*/ top__DOT__src__DOT____Vtogcov__src_val;
        CData/*0:0*/ top__DOT__src__DOT____Vtogcov__src_rdy;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT__index_en;
        CData/*1:0*/ top__DOT__src__DOT__src__DOT__index_next;
        CData/*1:0*/ top__DOT__src__DOT__src__DOT__index;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT__reset_reg;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT__done_next;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT____Vtogcov__index_en;
        CData/*1:0*/ top__DOT__src__DOT__src__DOT____Vtogcov__index_next;
        CData/*1:0*/ top__DOT__src__DOT__src__DOT____Vtogcov__index;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg;
        CData/*0:0*/ top__DOT__src__DOT__src__DOT____Vtogcov__done_next;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__state_next;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT__state;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next;
        CData/*0:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state;
        CData/*0:0*/ top__DOT__dut__DOT__b_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT__a_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT__result_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT__result_en;
        CData/*0:0*/ top__DOT__dut__DOT__add_mux_sel;
        CData/*4:0*/ top__DOT__dut__DOT__shamt;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__b_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__a_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__result_mux_sel;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__result_en;
        CData/*0:0*/ top__DOT__dut__DOT____Vtogcov__add_mux_sel;
        CData/*4:0*/ top__DOT__dut__DOT____Vtogcov__shamt;
        CData/*1:0*/ top__DOT__dut__DOT__control__DOT__state;
        CData/*1:0*/ top__DOT__dut__DOT__control__DOT__nextState;
        CData/*0:0*/ top__DOT__dut__DOT__control__DOT__done;
        CData/*1:0*/ top__DOT__dut__DOT__control__DOT____Vtogcov__state;
        CData/*1:0*/ top__DOT__dut__DOT__control__DOT____Vtogcov__nextState;
        CData/*0:0*/ top__DOT__dut__DOT__control__DOT____Vtogcov__done;
        CData/*4:0*/ top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_shamt;
        CData/*0:0*/ top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_done;
        CData/*0:0*/ top__DOT__dut__DOT__control__DOT__unnamedblk1__DOT__temp_add_mux_sel;
        CData/*3:0*/ top__DOT__dut__DOT__vc_trace__DOT__level;
        CData/*3:0*/ top__DOT__dut__DOT__vc_trace__DOT____Vtogcov__level;
        CData/*0:0*/ top__DOT__sink__DOT__sink_val;
    };
    struct {
        CData/*0:0*/ top__DOT__sink__DOT__sink_rdy;
        CData/*0:0*/ top__DOT__sink__DOT____Vtogcov__sink_val;
        CData/*0:0*/ top__DOT__sink__DOT____Vtogcov__sink_rdy;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__state_next;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT__state;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next;
        CData/*0:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__index_en;
        CData/*1:0*/ top__DOT__sink__DOT__sink__DOT__index_next;
        CData/*1:0*/ top__DOT__sink__DOT__sink__DOT__index;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__reset_reg;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__done_next;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT__failed;
        CData/*3:0*/ top__DOT__sink__DOT__sink__DOT__verbose;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en;
        CData/*1:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__index_next;
        CData/*1:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__index;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__reset_reg;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__done_next;
        CData/*0:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__failed;
        CData/*3:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__verbose;
        CData/*4:0*/ __Vtask_top__DOT__dut__DOT__control__DOT__tab__26__t_shamt;
        CData/*0:0*/ __Vtask_top__DOT__dut__DOT__control__DOT__tab__26__t_add_mux_sel;
        CData/*0:0*/ __Vtask_top__DOT__dut__DOT__control__DOT__tab__26__t_done;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx;
        IData/*31:0*/ top__DOT____Vtogcov__ostream_msg;
        IData/*31:0*/ top__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ top__DOT__src__DOT____Vtogcov__max_delay;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_num;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay_next;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT__rand_delay;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_num;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_next;
        IData/*31:0*/ top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay;
        VlWide<128>/*4095:0*/ top__DOT__dut__DOT__str;
        IData/*31:0*/ top__DOT__dut__DOT__idx1;
        IData/*31:0*/ top__DOT__dut__DOT__idx0;
        IData/*31:0*/ top__DOT__dut__DOT____Vtogcov__b_lsb;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__a;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__b;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__b_reg_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__r_shift_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__a_reg_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__l_shift_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__result_reg_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT__adder_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__a;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__b;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__b_mux_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__r_shift_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__a_mux_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__a_reg_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__l_shift_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__result_mux_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__adder_out;
        IData/*31:0*/ top__DOT__dut__DOT__datapath__DOT____Vtogcov__add_mux_out;
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__len1;
    };
    struct {
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ top__DOT__dut__DOT__vc_trace__DOT__storage;
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__cycles_next;
        IData/*31:0*/ top__DOT__dut__DOT__vc_trace__DOT__cycles;
        IData/*31:0*/ top__DOT__sink__DOT__sink_msg;
        IData/*31:0*/ top__DOT__sink__DOT____Vtogcov__sink_msg;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_num;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT__rand_delay;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_num;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_next;
        IData/*31:0*/ top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay;
        IData/*31:0*/ top__DOT__sink__DOT__sink__DOT__m_curr;
        IData/*31:0*/ top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__istream_msg;
        QData/*63:0*/ top__DOT____Vtogcov__istream_msg;
        QData/*63:0*/ top__DOT__src__DOT__src_msg;
        QData/*63:0*/ top__DOT__src__DOT____Vtogcov__src_msg;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__src_msgs;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__snk_msgs;
        VlUnpacked<QData/*63:0*/, 3> top__DOT____Vtogcov__src_msgs;
        VlUnpacked<IData/*31:0*/, 3> top__DOT____Vtogcov__snk_msgs;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__src__DOT__src__DOT__m;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__src__DOT__src__DOT____Vtogcov__m;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__sink__DOT__sink__DOT__m;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__sink__DOT__sink__DOT____Vtogcov__m;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3cadd47d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
