// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
    vlSelf->__Vtrigrprev__TOP__top__DOT__divided_clk 
        = vlSelf->top__DOT__divided_clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__s_unit_cout 
        = vlSelf->top__DOT__s_unit_cout;
    vlSelf->__Vtrigrprev__TOP__top__DOT__s_ten_cout 
        = vlSelf->top__DOT__s_ten_cout;
    vlSelf->__Vtrigrprev__TOP__top__DOT__m_unit_cout 
        = vlSelf->top__DOT__m_unit_cout;
    vlSelf->__Vtrigrprev__TOP__top__DOT__m_ten_cout 
        = vlSelf->top__DOT__m_ten_cout;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/rain/proj/nju_dlco/counter/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_h1bf82426__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_haf15b570__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0 = 0;
    CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0;
    top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0 = 0;
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
    // Body
    top__DOT__s_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__s_unit_digit))));
    top__DOT__s_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__s_unit_digit))));
    top__DOT__s_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__s_ten_digit))));
    top__DOT__s_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__s_ten_digit))));
    top__DOT__m_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__m_unit_digit))));
    top__DOT__m_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__m_unit_digit))));
    top__DOT__m_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__m_ten_digit))));
    top__DOT__m_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__m_ten_digit))));
    top__DOT__h_unit_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__h_unit_digit))));
    top__DOT__h_unit_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__h_unit_digit))));
    top__DOT__h_ten_seg__DOT____VdfgTmp_h64124e14__0 
        = (IData)((0U == (0xcU & (IData)(vlSelf->top__DOT__h_ten_digit))));
    top__DOT__h_ten_seg__DOT____VdfgTmp_hcd43b139__0 
        = (IData)((4U == (0xcU & (IData)(vlSelf->top__DOT__h_ten_digit))));
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
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__s_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__s_unit_seg__DOT__out4));
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__s_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__s_ten_seg__DOT__out4));
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__m_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__m_unit_seg__DOT__out4));
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__m_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__m_ten_seg__DOT__out4));
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__h_unit_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__h_unit_seg__DOT__out4));
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0 
        = ((IData)(vlSelf->top__DOT__h_ten_seg__DOT__out1) 
           | (IData)(vlSelf->top__DOT__h_ten_seg__DOT__out4));
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge reset or posedge top.divided_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge reset or posedge top.s_unit_cout)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge reset or posedge top.s_ten_cout)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge reset or posedge top.m_unit_cout)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge reset or posedge top.m_ten_cout)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge reset or posedge top.divided_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge reset or posedge top.s_unit_cout)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge reset or posedge top.s_ten_cout)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge reset or posedge top.m_unit_cout)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge reset or posedge top.m_ten_cout)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->en = 0;
    vlSelf->reset = 0;
    vlSelf->out = 0;
    vlSelf->top__DOT__divided_clk = 0;
    vlSelf->top__DOT__s_unit_digit = 0;
    vlSelf->top__DOT__s_unit_cout = 0;
    vlSelf->top__DOT__s_ten_digit = 0;
    vlSelf->top__DOT__s_ten_cout = 0;
    vlSelf->top__DOT__m_unit_digit = 0;
    vlSelf->top__DOT__m_unit_cout = 0;
    vlSelf->top__DOT__m_ten_digit = 0;
    vlSelf->top__DOT__m_ten_cout = 0;
    vlSelf->top__DOT__h_unit_digit = 0;
    vlSelf->top__DOT__h_ten_digit = 0;
    vlSelf->top__DOT__divider__DOT__counter = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out1 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out2 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out3 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out4 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out5 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT__out7 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__s_unit_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out1 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out2 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out3 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out4 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out5 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT__out7 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__s_ten_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out1 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out2 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out3 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out4 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out5 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT__out7 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__m_unit_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out1 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out2 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out3 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out4 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out5 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT__out7 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__m_ten_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out1 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out2 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out3 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out4 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out5 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT__out7 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__h_unit_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out1 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out2 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out3 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out4 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out5 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT__out7 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h0446c855__0 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0 = 0;
    vlSelf->top__DOT__h_ten_seg__DOT____VdfgTmp_h341555ca__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__reset = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__divided_clk = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__s_unit_cout = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__s_ten_cout = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__m_unit_cout = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__m_ten_cout = 0;
}
