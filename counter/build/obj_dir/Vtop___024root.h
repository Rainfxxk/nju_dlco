// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT__divided_clk;
        CData/*0:0*/ top__DOT__s_unit_cout;
        CData/*0:0*/ top__DOT__s_ten_cout;
        CData/*0:0*/ top__DOT__m_unit_cout;
        CData/*0:0*/ top__DOT__m_ten_cout;
        VL_IN8(en,0,0);
        CData/*3:0*/ top__DOT__s_unit_digit;
        CData/*3:0*/ top__DOT__s_ten_digit;
        CData/*3:0*/ top__DOT__m_unit_digit;
        CData/*3:0*/ top__DOT__m_ten_digit;
        CData/*3:0*/ top__DOT__h_unit_digit;
        CData/*3:0*/ top__DOT__h_ten_digit;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out1;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out2;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out3;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out4;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out5;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT__out7;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__s_unit_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out1;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out2;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out3;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out4;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out5;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT__out7;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__s_ten_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out1;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out2;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out3;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out4;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out5;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT__out7;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__m_unit_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out1;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out2;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out3;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out4;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out5;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT__out7;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__m_ten_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out1;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out2;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out3;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out4;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out5;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT__out7;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__h_unit_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out1;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out2;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out3;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out4;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out5;
    };
    struct {
        CData/*0:0*/ top__DOT__h_ten_seg__DOT__out7;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_h0446c855__0;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_ha7c1788f__0;
        CData/*0:0*/ top__DOT__h_ten_seg__DOT____VdfgTmp_h341555ca__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__divided_clk;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__s_unit_cout;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__s_ten_cout;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__m_unit_cout;
        CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__m_ten_cout;
        CData/*0:0*/ __VactContinue;
        IData/*25:0*/ top__DOT__divider__DOT__counter;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(out,47,0);
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
