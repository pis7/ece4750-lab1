// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_vc_Mux2__P20.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_vc_Mux2__P20              TOP__top__DOT__imul__DOT__datapath__DOT__a_mux;
    Vtop_vc_Mux2__P20              TOP__top__DOT__imul__DOT__datapath__DOT__adder_mux;
    Vtop_vc_Mux2__P20              TOP__top__DOT__imul__DOT__datapath__DOT__b_mux;
    Vtop_vc_Mux2__P20              TOP__top__DOT__imul__DOT__datapath__DOT__result_mux;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[583];

    // SCOPE NAMES
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__test_task;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
