// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*25:0*/ __Vdly__top__DOT__divider__DOT__counter;
    __Vdly__top__DOT__divider__DOT__counter = 0;
    // Body
    __Vdly__top__DOT__divider__DOT__counter = vlSelf->top__DOT__divider__DOT__counter;
    if (vlSelf->en) {
        __Vdly__top__DOT__divider__DOT__counter = (0x3ffffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__divider__DOT__counter));
        if ((0x1f4U == vlSelf->top__DOT__divider__DOT__counter)) {
            vlSelf->top__DOT__divided_clk = (1U & (~ (IData)(vlSelf->top__DOT__divided_clk)));
            __Vdly__top__DOT__divider__DOT__counter = 0U;
        }
    } else {
        vlSelf->top__DOT__divided_clk = 0U;
        __Vdly__top__DOT__divider__DOT__counter = 0U;
    }
    vlSelf->top__DOT__divider__DOT__counter = __Vdly__top__DOT__divider__DOT__counter;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__s_unit_digit;
    __Vdly__top__DOT__s_unit_digit = 0;
    // Body
    __Vdly__top__DOT__s_unit_digit = vlSelf->top__DOT__s_unit_digit;
    if (vlSelf->reset) {
        __Vdly__top__DOT__s_unit_digit = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__s_unit_digit)));
        if ((9U <= (IData)(vlSelf->top__DOT__s_unit_digit))) {
            __Vdly__top__DOT__s_unit_digit = 0U;
            vlSelf->top__DOT__s_unit_cout = 1U;
        } else {
            vlSelf->top__DOT__s_unit_cout = 0U;
        }
    } else {
        __Vdly__top__DOT__s_unit_digit = 0U;
        vlSelf->top__DOT__s_unit_cout = 0U;
    }
    vlSelf->top__DOT__s_unit_digit = __Vdly__top__DOT__s_unit_digit;
    top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__s_unit_digit))));
    top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__s_unit_digit))));
    top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__s_unit_digit) 
              >> 1U));
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__s_unit_digit) 
               >> 1U)) & (IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__s_unit_digit) 
              >> 1U));
    top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__s_unit_digit) 
               >> 1U)) & (IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0));
    vlSelf->top__DOT__s_unit_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__s_unit_digit)) 
                                               & (IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__s_unit_seg__DOT__out3 = ((IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0) 
                                               & (IData)(vlSelf->top__DOT__s_unit_digit));
    vlSelf->top__DOT__s_unit_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h0446c855__0) 
                                               & (IData)(vlSelf->top__DOT__s_unit_digit));
    vlSelf->top__DOT__s_unit_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h341555ca__0) 
                                               & (IData)(vlSelf->top__DOT__s_unit_digit));
    vlSelf->top__DOT__s_unit_seg__DOT__out5 = ((IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0) 
                                               & (IData)(vlSelf->top__DOT__s_unit_digit));
    vlSelf->top__DOT__s_unit_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__s_unit_digit)) 
                                               & (IData)(top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out4));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__s_ten_digit;
    __Vdly__top__DOT__s_ten_digit = 0;
    // Body
    __Vdly__top__DOT__s_ten_digit = vlSelf->top__DOT__s_ten_digit;
    if (vlSelf->reset) {
        __Vdly__top__DOT__s_ten_digit = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__s_ten_digit)));
        if ((5U <= (IData)(vlSelf->top__DOT__s_ten_digit))) {
            __Vdly__top__DOT__s_ten_digit = 0U;
            vlSelf->top__DOT__s_ten_cout = 1U;
        } else {
            vlSelf->top__DOT__s_ten_cout = 0U;
        }
    } else {
        __Vdly__top__DOT__s_ten_digit = 0U;
        vlSelf->top__DOT__s_ten_cout = 0U;
    }
    vlSelf->top__DOT__s_ten_digit = __Vdly__top__DOT__s_ten_digit;
    top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__s_ten_digit))));
    top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__s_ten_digit))));
    top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__s_ten_digit) 
              >> 1U));
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__s_ten_digit) 
               >> 1U)) & (IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__s_ten_digit) 
              >> 1U));
    top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__s_ten_digit) 
               >> 1U)) & (IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0));
    vlSelf->top__DOT__s_ten_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__s_ten_digit)) 
                                              & (IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__s_ten_seg__DOT__out3 = ((IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0) 
                                              & (IData)(vlSelf->top__DOT__s_ten_digit));
    vlSelf->top__DOT__s_ten_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h0446c855__0) 
                                              & (IData)(vlSelf->top__DOT__s_ten_digit));
    vlSelf->top__DOT__s_ten_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h341555ca__0) 
                                              & (IData)(vlSelf->top__DOT__s_ten_digit));
    vlSelf->top__DOT__s_ten_seg__DOT__out5 = ((IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0) 
                                              & (IData)(vlSelf->top__DOT__s_ten_digit));
    vlSelf->top__DOT__s_ten_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__s_ten_digit)) 
                                              & (IData)(top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out4));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__m_unit_digit;
    __Vdly__top__DOT__m_unit_digit = 0;
    // Body
    __Vdly__top__DOT__m_unit_digit = vlSelf->top__DOT__m_unit_digit;
    if (vlSelf->reset) {
        __Vdly__top__DOT__m_unit_digit = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__m_unit_digit)));
        if ((9U <= (IData)(vlSelf->top__DOT__m_unit_digit))) {
            __Vdly__top__DOT__m_unit_digit = 0U;
            vlSelf->top__DOT__m_unit_cout = 1U;
        } else {
            vlSelf->top__DOT__m_unit_cout = 0U;
        }
    } else {
        __Vdly__top__DOT__m_unit_digit = 0U;
        vlSelf->top__DOT__m_unit_cout = 0U;
    }
    vlSelf->top__DOT__m_unit_digit = __Vdly__top__DOT__m_unit_digit;
    top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__m_unit_digit))));
    top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__m_unit_digit))));
    top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__m_unit_digit) 
              >> 1U));
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__m_unit_digit) 
               >> 1U)) & (IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__m_unit_digit) 
              >> 1U));
    top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__m_unit_digit) 
               >> 1U)) & (IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0));
    vlSelf->top__DOT__m_unit_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__m_unit_digit)) 
                                               & (IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__m_unit_seg__DOT__out3 = ((IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0) 
                                               & (IData)(vlSelf->top__DOT__m_unit_digit));
    vlSelf->top__DOT__m_unit_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h0446c855__0) 
                                               & (IData)(vlSelf->top__DOT__m_unit_digit));
    vlSelf->top__DOT__m_unit_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h341555ca__0) 
                                               & (IData)(vlSelf->top__DOT__m_unit_digit));
    vlSelf->top__DOT__m_unit_seg__DOT__out5 = ((IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0) 
                                               & (IData)(vlSelf->top__DOT__m_unit_digit));
    vlSelf->top__DOT__m_unit_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__m_unit_digit)) 
                                               & (IData)(top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out4));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__m_ten_digit;
    __Vdly__top__DOT__m_ten_digit = 0;
    // Body
    __Vdly__top__DOT__m_ten_digit = vlSelf->top__DOT__m_ten_digit;
    if (vlSelf->reset) {
        __Vdly__top__DOT__m_ten_digit = (0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__m_ten_digit)));
        if ((5U <= (IData)(vlSelf->top__DOT__m_ten_digit))) {
            __Vdly__top__DOT__m_ten_digit = 0U;
            vlSelf->top__DOT__m_ten_cout = 1U;
        } else {
            vlSelf->top__DOT__m_ten_cout = 0U;
        }
    } else {
        __Vdly__top__DOT__m_ten_digit = 0U;
        vlSelf->top__DOT__m_ten_cout = 0U;
    }
    vlSelf->top__DOT__m_ten_digit = __Vdly__top__DOT__m_ten_digit;
    top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__m_ten_digit))));
    top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__m_ten_digit))));
    top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__m_ten_digit) 
              >> 1U));
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__m_ten_digit) 
               >> 1U)) & (IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__m_ten_digit) 
              >> 1U));
    top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__m_ten_digit) 
               >> 1U)) & (IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0));
    vlSelf->top__DOT__m_ten_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__m_ten_digit)) 
                                              & (IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__m_ten_seg__DOT__out3 = ((IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0) 
                                              & (IData)(vlSelf->top__DOT__m_ten_digit));
    vlSelf->top__DOT__m_ten_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h0446c855__0) 
                                              & (IData)(vlSelf->top__DOT__m_ten_digit));
    vlSelf->top__DOT__m_ten_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h341555ca__0) 
                                              & (IData)(vlSelf->top__DOT__m_ten_digit));
    vlSelf->top__DOT__m_ten_seg__DOT__out5 = ((IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0) 
                                              & (IData)(vlSelf->top__DOT__m_ten_digit));
    vlSelf->top__DOT__m_ten_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__m_ten_digit)) 
                                              & (IData)(top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out4));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__h_unit_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__h_unit_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__h_ten_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__h_ten_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*3:0*/ __Vdly__top__DOT__h_unit_digit;
    __Vdly__top__DOT__h_unit_digit = 0;
    CData/*3:0*/ __Vdly__top__DOT__h_ten_digit;
    __Vdly__top__DOT__h_ten_digit = 0;
    // Body
    __Vdly__top__DOT__h_ten_digit = vlSelf->top__DOT__h_ten_digit;
    __Vdly__top__DOT__h_unit_digit = vlSelf->top__DOT__h_unit_digit;
    if (vlSelf->reset) {
        __Vdly__top__DOT__h_unit_digit = (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__h_unit_digit)));
        if (((2U <= (IData)(vlSelf->top__DOT__h_ten_digit)) 
             & (3U <= (IData)(vlSelf->top__DOT__h_unit_digit)))) {
            __Vdly__top__DOT__h_ten_digit = 0U;
            __Vdly__top__DOT__h_unit_digit = 0U;
        }
        if ((9U <= (IData)(vlSelf->top__DOT__h_unit_digit))) {
            __Vdly__top__DOT__h_ten_digit = (0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__h_ten_digit)));
            __Vdly__top__DOT__h_unit_digit = 0U;
        }
    } else {
        __Vdly__top__DOT__h_unit_digit = 0U;
        __Vdly__top__DOT__h_ten_digit = 0U;
    }
    vlSelf->top__DOT__h_unit_digit = __Vdly__top__DOT__h_unit_digit;
    vlSelf->top__DOT__h_ten_digit = __Vdly__top__DOT__h_ten_digit;
    top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__h_unit_digit))));
    top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__h_unit_digit))));
    top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__h_ten_digit))));
    top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__h_ten_digit))));
    top__DOT__h_unit_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__h_unit_digit) 
              >> 1U));
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__h_unit_digit) 
               >> 1U)) & (IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__h_unit_digit) 
              >> 1U));
    top__DOT__h_unit_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__h_unit_digit) 
               >> 1U)) & (IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0));
    top__DOT__h_ten_seg__DOT____VdfgTmp_h1bf82426__0 
        = ((IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0) 
           & ((IData)(vlSelf->top__DOT__h_ten_digit) 
              >> 1U));
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h0446c855__0 
        = ((~ ((IData)(vlSelf->top__DOT__h_ten_digit) 
               >> 1U)) & (IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0));
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h341555ca__0 
        = ((IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0) 
           & ((IData)(vlSelf->top__DOT__h_ten_digit) 
              >> 1U));
    top__DOT__h_ten_seg__DOT____VdfgTmp_haf15b570__0 
        = ((~ ((IData)(vlSelf->top__DOT__h_ten_digit) 
               >> 1U)) & (IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0));
    vlSelf->top__DOT__h_unit_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__h_unit_digit)) 
                                               & (IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__h_unit_seg__DOT__out3 = ((IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_h1bf82426__0) 
                                               & (IData)(vlSelf->top__DOT__h_unit_digit));
    vlSelf->top__DOT__h_unit_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h0446c855__0) 
                                               & (IData)(vlSelf->top__DOT__h_unit_digit));
    vlSelf->top__DOT__h_unit_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h341555ca__0) 
                                               & (IData)(vlSelf->top__DOT__h_unit_digit));
    vlSelf->top__DOT__h_unit_seg__DOT__out5 = ((IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_haf15b570__0) 
                                               & (IData)(vlSelf->top__DOT__h_unit_digit));
    vlSelf->top__DOT__h_unit_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__h_unit_digit)) 
                                               & (IData)(top__DOT__h_unit_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__h_ten_seg__DOT__out2 = ((~ (IData)(vlSelf->top__DOT__h_ten_digit)) 
                                              & (IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_h1bf82426__0));
    vlSelf->top__DOT__h_ten_seg__DOT__out3 = ((IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_h1bf82426__0) 
                                              & (IData)(vlSelf->top__DOT__h_ten_digit));
    vlSelf->top__DOT__h_ten_seg__DOT__out1 = ((IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h0446c855__0) 
                                              & (IData)(vlSelf->top__DOT__h_ten_digit));
    vlSelf->top__DOT__h_ten_seg__DOT__out7 = ((IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h341555ca__0) 
                                              & (IData)(vlSelf->top__DOT__h_ten_digit));
    vlSelf->top__DOT__h_ten_seg__DOT__out5 = ((IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_haf15b570__0) 
                                              & (IData)(vlSelf->top__DOT__h_ten_digit));
    vlSelf->top__DOT__h_ten_seg__DOT__out4 = ((~ (IData)(vlSelf->top__DOT__h_ten_digit)) 
                                              & (IData)(top__DOT__h_ten_seg__DOT____VdfgTmp_haf15b570__0));
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out4));
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out4));
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->out = (((QData)((IData)((0x80U | (((((~ (IData)(vlSelf->top__DOT__h_ten_digit)) 
                                                 & (IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                | ((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out1) 
                                                   | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out7))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out1) 
                                                   | ((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out2) 
                                                      | ((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out3) 
                                                         | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out7)))) 
                                                  << 5U) 
                                                 | ((((((((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out1) 
                                                          | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out3)) 
                                                         | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out4)) 
                                                        | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out5)) 
                                                       | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out7)) 
                                                      | (9U 
                                                         == (IData)(vlSelf->top__DOT__h_ten_digit))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                         | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out7)) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out2) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out5) 
                                                               | ((~ (IData)(vlSelf->top__DOT__h_ten_digit)) 
                                                                  & (IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0)))))))))) 
                    << 0x28U) | (((QData)((IData)((0x80U 
                                                   | (((((~ (IData)(vlSelf->top__DOT__h_unit_digit)) 
                                                         & (IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                        | ((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out1) 
                                                           | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out7))) 
                                                       << 6U) 
                                                      | ((((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out1) 
                                                           | ((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out2) 
                                                              | ((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out3) 
                                                                 | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out7)))) 
                                                          << 5U) 
                                                         | ((((((((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out1) 
                                                                  | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out3)) 
                                                                 | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out4)) 
                                                                | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out5)) 
                                                               | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out7)) 
                                                              | (9U 
                                                                 == (IData)(vlSelf->top__DOT__h_unit_digit))) 
                                                             << 4U) 
                                                            | ((((IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                 | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out7)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out2) 
                                                                   << 2U) 
                                                                  | ((((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out5) 
                                                                       | ((~ (IData)(vlSelf->top__DOT__h_unit_digit)) 
                                                                          & (IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0)))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0x80808080U 
                                                               | ((((((~ (IData)(vlSelf->top__DOT__m_ten_digit)) 
                                                                      & (IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                                     | ((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out1) 
                                                                        | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out7))) 
                                                                    << 0x1eU) 
                                                                   | ((((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out1) 
                                                                        | ((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out2) 
                                                                           | ((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out3) 
                                                                              | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out7)))) 
                                                                       << 0x1dU) 
                                                                      | ((((((((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out1) 
                                                                               | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out3)) 
                                                                              | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out4)) 
                                                                             | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out5)) 
                                                                            | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out7)) 
                                                                           | (9U 
                                                                              == (IData)(vlSelf->top__DOT__m_ten_digit))) 
                                                                          << 0x1cU) 
                                                                         | ((((IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                              | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out7)) 
                                                                             << 0x1bU) 
                                                                            | (((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out2) 
                                                                                << 0x1aU) 
                                                                               | ((((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out5) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__m_ten_digit)) 
                                                                                & (IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                                                << 0x19U) 
                                                                                | ((IData)(vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                << 0x18U))))))) 
                                                                  | ((((((~ (IData)(vlSelf->top__DOT__m_unit_digit)) 
                                                                         & (IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                                        | ((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out1) 
                                                                           | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out7))) 
                                                                       << 0x16U) 
                                                                      | ((((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out1) 
                                                                           | ((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out2) 
                                                                              | ((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out3) 
                                                                                | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out7)))) 
                                                                          << 0x15U) 
                                                                         | ((((((((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out1) 
                                                                                | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out3)) 
                                                                                | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out4)) 
                                                                                | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out5)) 
                                                                               | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out7)) 
                                                                              | (9U 
                                                                                == (IData)(vlSelf->top__DOT__m_unit_digit))) 
                                                                             << 0x14U) 
                                                                            | ((((IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out7)) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out2) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out5) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__m_unit_digit)) 
                                                                                & (IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                << 0x10U))))))) 
                                                                     | ((((((~ (IData)(vlSelf->top__DOT__s_ten_digit)) 
                                                                            & (IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                                           | ((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out1) 
                                                                              | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out7))) 
                                                                          << 0xeU) 
                                                                         | ((((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out1) 
                                                                              | ((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out2) 
                                                                                | ((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out3) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out7)))) 
                                                                             << 0xdU) 
                                                                            | ((((((((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out1) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out3)) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out4)) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out5)) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out7)) 
                                                                                | (9U 
                                                                                == (IData)(vlSelf->top__DOT__s_ten_digit))) 
                                                                                << 0xcU) 
                                                                               | ((((IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out7)) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out2) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out5) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__s_ten_digit)) 
                                                                                & (IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                                                << 9U) 
                                                                                | ((IData)(vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                << 8U))))))) 
                                                                        | (((((~ (IData)(vlSelf->top__DOT__s_unit_digit)) 
                                                                              & (IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h0446c855__0)) 
                                                                             | ((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out1) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out7))) 
                                                                            << 6U) 
                                                                           | ((((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out1) 
                                                                                | ((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out2) 
                                                                                | ((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out3) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out7)))) 
                                                                               << 5U) 
                                                                              | ((((((((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out1) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out3)) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out4)) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out5)) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out7)) 
                                                                                | (9U 
                                                                                == (IData)(vlSelf->top__DOT__s_unit_digit))) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out7)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out2) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out5) 
                                                                                | ((~ (IData)(vlSelf->top__DOT__s_unit_digit)) 
                                                                                & (IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h341555ca__0))) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0)))))))))))))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
           | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U)) 
         | vlSelf->__VnbaTriggered.at(5U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/rain/proj/nju_dlco/counter/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/rain/proj/nju_dlco/counter/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
