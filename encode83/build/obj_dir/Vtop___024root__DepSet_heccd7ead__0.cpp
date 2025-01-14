// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_h0d68042a_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__seg__DOT__out1;
    top__DOT__seg__DOT__out1 = 0;
    CData/*0:0*/ top__DOT__seg__DOT__out2;
    top__DOT__seg__DOT__out2 = 0;
    CData/*0:0*/ top__DOT__seg__DOT__out3;
    top__DOT__seg__DOT__out3 = 0;
    CData/*0:0*/ top__DOT__seg__DOT__out4;
    top__DOT__seg__DOT__out4 = 0;
    CData/*0:0*/ top__DOT__seg__DOT__out5;
    top__DOT__seg__DOT__out5 = 0;
    CData/*0:0*/ top__DOT__seg__DOT__out7;
    top__DOT__seg__DOT__out7 = 0;
    CData/*0:0*/ top__DOT__seg__DOT____VdfgTmp_h0446c855__0;
    top__DOT__seg__DOT____VdfgTmp_h0446c855__0 = 0;
    CData/*0:0*/ top__DOT__seg__DOT____VdfgTmp_ha7c1788f__0;
    top__DOT__seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    CData/*0:0*/ top__DOT__seg__DOT____VdfgTmp_h341555ca__0;
    top__DOT__seg__DOT____VdfgTmp_h341555ca__0 = 0;
    CData/*0:0*/ top__DOT__seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__seg__DOT____VdfgTmp_haf15b570__0 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->in) << 1U) | (IData)(vlSelf->en));
    vlSelf->encode_out = Vtop__ConstPool__TABLE_h0d68042a_0
        [__Vtableidx1];
    top__DOT__seg__DOT____VdfgTmp_h341555ca__0 = (IData)(
                                                         (6U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->encode_out))));
    top__DOT__seg__DOT____VdfgTmp_h1bf82426__0 = (IData)(
                                                         (2U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->encode_out))));
    top__DOT__seg__DOT____VdfgTmp_h0446c855__0 = (IData)(
                                                         (0U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->encode_out))));
    top__DOT__seg__DOT____VdfgTmp_haf15b570__0 = (IData)(
                                                         (4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->encode_out))));
    top__DOT__seg__DOT__out7 = ((IData)(top__DOT__seg__DOT____VdfgTmp_h341555ca__0) 
                                & (IData)(vlSelf->encode_out));
    top__DOT__seg__DOT__out2 = ((~ (IData)(vlSelf->encode_out)) 
                                & (IData)(top__DOT__seg__DOT____VdfgTmp_h1bf82426__0));
    top__DOT__seg__DOT__out3 = ((IData)(top__DOT__seg__DOT____VdfgTmp_h1bf82426__0) 
                                & (IData)(vlSelf->encode_out));
    top__DOT__seg__DOT__out1 = ((IData)(top__DOT__seg__DOT____VdfgTmp_h0446c855__0) 
                                & (IData)(vlSelf->encode_out));
    top__DOT__seg__DOT__out5 = ((IData)(top__DOT__seg__DOT____VdfgTmp_haf15b570__0) 
                                & (IData)(vlSelf->encode_out));
    top__DOT__seg__DOT__out4 = ((~ (IData)(vlSelf->encode_out)) 
                                & (IData)(top__DOT__seg__DOT____VdfgTmp_haf15b570__0));
    top__DOT__seg__DOT____VdfgTmp_ha7c1788f__0 = ((IData)(top__DOT__seg__DOT__out1) 
                                                  | (IData)(top__DOT__seg__DOT__out4));
    vlSelf->out = (((((~ (IData)(vlSelf->encode_out)) 
                      & (IData)(top__DOT__seg__DOT____VdfgTmp_h0446c855__0)) 
                     | ((IData)(top__DOT__seg__DOT__out1) 
                        | (IData)(top__DOT__seg__DOT__out7))) 
                    << 6U) | ((((IData)(top__DOT__seg__DOT__out1) 
                                | ((IData)(top__DOT__seg__DOT__out2) 
                                   | ((IData)(top__DOT__seg__DOT__out3) 
                                      | (IData)(top__DOT__seg__DOT__out7)))) 
                               << 5U) | ((((IData)(top__DOT__seg__DOT__out1) 
                                           | ((IData)(top__DOT__seg__DOT__out3) 
                                              | ((IData)(top__DOT__seg__DOT__out4) 
                                                 | ((IData)(top__DOT__seg__DOT__out5) 
                                                    | (IData)(top__DOT__seg__DOT__out7))))) 
                                          << 4U) | 
                                         ((((IData)(top__DOT__seg__DOT____VdfgTmp_ha7c1788f__0) 
                                            | (IData)(top__DOT__seg__DOT__out7)) 
                                           << 3U) | 
                                          (((IData)(top__DOT__seg__DOT__out2) 
                                            << 2U) 
                                           | ((((IData)(top__DOT__seg__DOT__out5) 
                                                | ((~ (IData)(vlSelf->encode_out)) 
                                                   & (IData)(top__DOT__seg__DOT____VdfgTmp_h341555ca__0))) 
                                               << 1U) 
                                              | (IData)(top__DOT__seg__DOT____VdfgTmp_ha7c1788f__0)))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/rain/proj/nju_dlco/encode83/vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("/home/rain/proj/nju_dlco/encode83/vsrc/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/rain/proj/nju_dlco/encode83/vsrc/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
