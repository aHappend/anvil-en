// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VANVIL_EN1_TOP__SYMS_H_
#define VERILATED_VANVIL_EN1_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vanvil_en1_top.h"

// INCLUDE MODULE CLASSES
#include "Vanvil_en1_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vanvil_en1_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vanvil_en1_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vanvil_en1_top___024root       TOP;

    // CONSTRUCTORS
    Vanvil_en1_top__Syms(VerilatedContext* contextp, const char* namep, Vanvil_en1_top* modelp);
    ~Vanvil_en1_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
