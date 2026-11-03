// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_en1_top.h for the primary calling header

#include "Vanvil_en1_top__pch.h"
#include "Vanvil_en1_top__Syms.h"
#include "Vanvil_en1_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_en1_top___024root___dump_triggers__ico(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_en1_top___024root___eval_triggers__ico(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vanvil_en1_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_en1_top___024root___dump_triggers__act(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_en1_top___024root___eval_triggers__act(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_subsample__DOT__vectors__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_subsample__DOT__vectors__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(2U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__vectors__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__vectors__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(3U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__attention__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__attention__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(4U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_bridge__DOT__projections__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_bridge__DOT__projections__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(6U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__vision_encoder__DOT__engine__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__vision_encoder__DOT__engine__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(7U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(8U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__hybrid_layer__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__hybrid_layer__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(9U, (((~ (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__pool_norm__DOT__engine__DOT__unit_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__pool_norm__DOT__engine__DOT__unit_rst_n__0)) 
                                     | ((IData)(vlSelf->clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((~ (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__child_rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__child_rst_n__0)) 
                                       | ((IData)(vlSelf->clk) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_subsample__DOT__vectors__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_subsample__DOT__vectors__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__vectors__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__vectors__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__attention__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_conformer__DOT__attention__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_bridge__DOT__projections__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__audio_bridge__DOT__projections__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__vision_encoder__DOT__engine__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__vision_encoder__DOT__engine__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__hybrid_layer__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__hybrid_layer__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__pool_norm__DOT__engine__DOT__unit_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__pool_norm__DOT__engine__DOT__unit_rst_n;
    vlSelf->__Vtrigprevexpr___TOP__anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__child_rst_n__0 
        = vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__child_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vanvil_en1_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
