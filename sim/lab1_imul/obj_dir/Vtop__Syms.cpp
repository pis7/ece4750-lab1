// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_vc_Mux2__P20.h"
#include "Vtop_vc_Reg__P20.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__a_mux{this, Verilated::catName(namep, "top.imul.datapath.a_mux")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__a_reg{this, Verilated::catName(namep, "top.imul.datapath.a_reg")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux{this, Verilated::catName(namep, "top.imul.datapath.adder_mux")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__b_mux{this, Verilated::catName(namep, "top.imul.datapath.b_mux")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__b_reg{this, Verilated::catName(namep, "top.imul.datapath.b_reg")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__result_mux{this, Verilated::catName(namep, "top.imul.datapath.result_mux")}
    , TOP__top__DOT__imul__DOT__datapath__DOT__result_reg{this, Verilated::catName(namep, "top.imul.datapath.result_reg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__a_mux = &TOP__top__DOT__imul__DOT__datapath__DOT__a_mux;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__a_reg = &TOP__top__DOT__imul__DOT__datapath__DOT__a_reg;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__adder_mux = &TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__b_mux = &TOP__top__DOT__imul__DOT__datapath__DOT__b_mux;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__b_reg = &TOP__top__DOT__imul__DOT__datapath__DOT__b_reg;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__result_mux = &TOP__top__DOT__imul__DOT__datapath__DOT__result_mux;
    TOP.__PVT__top__DOT__imul__DOT__datapath__DOT__result_reg = &TOP__top__DOT__imul__DOT__datapath__DOT__result_reg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__top__DOT__imul__DOT__datapath__DOT__a_mux.__Vconfigure(true);
    TOP__top__DOT__imul__DOT__datapath__DOT__a_reg.__Vconfigure(true);
    TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux.__Vconfigure(false);
    TOP__top__DOT__imul__DOT__datapath__DOT__b_mux.__Vconfigure(false);
    TOP__top__DOT__imul__DOT__datapath__DOT__b_reg.__Vconfigure(false);
    TOP__top__DOT__imul__DOT__datapath__DOT__result_mux.__Vconfigure(false);
    TOP__top__DOT__imul__DOT__datapath__DOT__result_reg.__Vconfigure(false);
    // Setup scopes
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__test_task.configure(this, name(), "top.test_task", "test_task", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
