// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_en1_top.h for the primary calling header

#include "Vanvil_en1_top__pch.h"
#include "Vanvil_en1_top___024root.h"

VL_INLINE_OPT void Vanvil_en1_top___024root___nba_comb__TOP__15(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___nba_comb__TOP__15\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    VL_EXTENDS_WQ(96,48, __Vtemp_1, ((9U == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                      ? ((IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mat_accumulate)
                                          ? vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__matvec__DOT__inputs
                                         [(7U & vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__matvec__DOT__col)]
                                          : 0ULL) : 
                                     ((0x17U == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                       ? 0ULL : ((0x15U 
                                                  == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                                  ? 0ULL
                                                  : vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__source_a_data))));
    VL_EXTENDS_WQ(96,48, __Vtemp_2, ((9U == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                      ? ((IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mat_accumulate)
                                          ? ((QData)((IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__bridge_data)) 
                                             << 0x10U)
                                          : 0ULL) : 
                                     ((0x17U == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                       ? 0ULL : ((0x15U 
                                                  == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__state))
                                                  ? 0ULL
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__vector_mode))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__scalar)) 
                                                   << 0x10U)
                                                   : vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__source_b_data)))));
    VL_MULS_WWW(96, __Vtemp_3, __Vtemp_1, __Vtemp_2);
    if (((IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_accumulate) 
         & (IData)(vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__unit_rst_n))) {
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[0U] 
            = __Vtemp_3[0U];
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[1U] 
            = __Vtemp_3[1U];
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[2U] 
            = __Vtemp_3[2U];
    } else {
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[0U] = 0U;
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[1U] = 0U;
        vlSelf->anvil_en1_top__DOT__parent__DOT__legal_datapath__DOT__text_frontend__DOT__engine__DOT__mac_product[2U] = 0U;
    }
}

VL_INLINE_OPT void Vanvil_en1_top___024root___nba_sequent__TOP__67(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___nba_sequent__TOP__67\n"); );
    // Body
    vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__descriptor_cursor 
        = vlSelf->__Vdly__anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__descriptor_cursor;
    vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__cache_store 
        = ((0x11U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__state)) 
           & ((IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__found) 
              & ((0U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__error_hold)) 
                 & ((~ ((IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__lifetime_lost) 
                        | (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__cache_clear))) 
                    & (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__cache_allowed)))));
    vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__output_base 
        = vlSelf->__Vdly__anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__output_base;
    if (vlSelf->rst_n) {
        if ((0ULL != vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__output_base)) {
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_rows 
                = vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__requested_rows;
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_columns 
                = vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__requested_columns;
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_type 
                = vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__requested_type;
        } else {
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_rows = 0U;
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_columns = 0U;
            vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_type = 0U;
        }
    } else {
        vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_rows = 0U;
        vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_columns = 0U;
        vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_type = 0U;
    }
    vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__mask_shape 
        = ((1U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__kind_hold)) 
           & ((1U == vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_rows) 
              & ((vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__frames_hold 
                  == vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_columns) 
                 & (2U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_type)))));
    vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__feature_shape 
        = ((0U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__kind_hold)) 
           & ((vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__frames_hold 
               == vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_rows) 
              & ((0x80U == vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_columns) 
                 & ((0x100U == ((IData)(vlSelf->rst_n)
                                 ? ((0ULL != vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__output_base)
                                     ? (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__directory__DOT__reader__DOT__requested_stride)
                                     : 0U) : 0U)) & 
                    (0U == (IData)(vlSelf->anvil_en1_top__DOT__native__DOT__binding__DOT__replay__DOT__image_feature__DOT__mapping__DOT__immutable_mask__DOT__lookup_type))))));
}

void Vanvil_en1_top___024root___nba_sequent__TOP__0(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__1(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__2(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__3(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__4(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__5(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__6(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__7(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__8(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__9(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__10(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__11(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__12(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__13(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__14(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__15(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__16(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__17(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__18(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__19(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__20(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__21(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__22(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__23(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__24(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__25(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__26(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__27(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__28(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__29(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__30(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__31(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__32(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__33(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__34(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__35(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__36(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__37(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__38(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__39(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__40(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__41(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__42(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__43(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__44(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__45(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__46(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__47(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__48(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__49(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__50(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__51(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__52(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__53(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__54(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__55(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__56(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__57(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__58(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__59(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__60(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__61(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__62(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__0(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__1(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__2(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__3(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__63(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__64(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__4(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__65(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__5(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__6(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__7(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__8(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__9(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__10(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__11(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__12(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__13(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_sequent__TOP__66(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___nba_comb__TOP__14(Vanvil_en1_top___024root* vlSelf);

void Vanvil_en1_top___024root___eval_nba(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__9(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__10(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__11(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__12(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__13(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__14(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__15(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__16(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__17(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__18(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__19(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__20(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__21(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__22(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__23(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__24(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__25(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__26(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__27(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__28(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__29(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__30(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__31(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__32(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__33(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__34(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__35(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__36(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__37(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__38(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__39(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__40(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__41(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__42(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__43(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__44(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__45(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__46(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__47(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__48(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__49(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__50(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__51(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__52(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__53(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__54(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__55(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__58(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__59(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__60(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__61(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__62(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x201ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__63(vlSelf);
        Vanvil_en1_top___024root___nba_sequent__TOP__64(vlSelf);
    }
    if ((0x420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__65(vlSelf);
    }
    if ((0x61ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x121ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x221ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((0x401ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0xa1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_en1_top___024root___nba_sequent__TOP__67(vlSelf);
    }
}

void Vanvil_en1_top___024root___eval_triggers__act(Vanvil_en1_top___024root* vlSelf);
void Vanvil_en1_top___024root___eval_act(Vanvil_en1_top___024root* vlSelf);

bool Vanvil_en1_top___024root___eval_phase__act(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vanvil_en1_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vanvil_en1_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vanvil_en1_top___024root___eval_phase__nba(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vanvil_en1_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_en1_top___024root___dump_triggers__ico(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vanvil_en1_top___024root___eval_phase__ico(Vanvil_en1_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_en1_top___024root___dump_triggers__nba(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_en1_top___024root___dump_triggers__act(Vanvil_en1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_en1_top___024root___eval(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vanvil_en1_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_en1_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vanvil_en1_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vanvil_en1_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_en1_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vanvil_en1_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/anvil_en1_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vanvil_en1_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vanvil_en1_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vanvil_en1_top___024root___eval_debug_assertions(Vanvil_en1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_en1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_en1_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->job_valid & 0xfeU))) {
        Verilated::overWidthError("job_valid");}
    if (VL_UNLIKELY((vlSelf->job_mode & 0xf8U))) {
        Verilated::overWidthError("job_mode");}
    if (VL_UNLIKELY((vlSelf->mem_req_ready & 0xfeU))) {
        Verilated::overWidthError("mem_req_ready");}
    if (VL_UNLIKELY((vlSelf->mem_rsp_valid & 0xfeU))) {
        Verilated::overWidthError("mem_rsp_valid");}
    if (VL_UNLIKELY((vlSelf->mem_rsp_error & 0xfeU))) {
        Verilated::overWidthError("mem_rsp_error");}
    if (VL_UNLIKELY((vlSelf->emb_ready & 0xfeU))) {
        Verilated::overWidthError("emb_ready");}
    if (VL_UNLIKELY((vlSelf->done_ready & 0xfeU))) {
        Verilated::overWidthError("done_ready");}
    if (VL_UNLIKELY((vlSelf->job_model & 0xfcU))) {
        Verilated::overWidthError("job_model");}
    if (VL_UNLIKELY((vlSelf->job_precision & 0xfcU))) {
        Verilated::overWidthError("job_precision");}
    if (VL_UNLIKELY((vlSelf->job_decode & 0xfeU))) {
        Verilated::overWidthError("job_decode");}
    if (VL_UNLIKELY((vlSelf->logit_ready & 0xfeU))) {
        Verilated::overWidthError("logit_ready");}
    if (VL_UNLIKELY((vlSelf->csr_valid & 0xfeU))) {
        Verilated::overWidthError("csr_valid");}
    if (VL_UNLIKELY((vlSelf->csr_write & 0xfeU))) {
        Verilated::overWidthError("csr_write");}
    if (VL_UNLIKELY((vlSelf->csr_addr & 0xf000U))) {
        Verilated::overWidthError("csr_addr");}
    if (VL_UNLIKELY((vlSelf->csr_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("csr_rsp_ready");}
}
#endif  // VL_DEBUG
