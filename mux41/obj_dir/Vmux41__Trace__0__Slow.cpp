// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41__Syms.h"


VL_ATTR_COLD void Vmux41___024root__trace_init_sub__TOP__0(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"x0", false,-1);
    tracep->declBit(c+2,"x1", false,-1);
    tracep->declBit(c+3,"x2", false,-1);
    tracep->declBit(c+4,"x3", false,-1);
    tracep->declBus(c+5,"s", false,-1, 1,0);
    tracep->declBit(c+6,"y", false,-1);
    tracep->pushNamePrefix("mux41 ");
    tracep->declBit(c+1,"x0", false,-1);
    tracep->declBit(c+2,"x1", false,-1);
    tracep->declBit(c+3,"x2", false,-1);
    tracep->declBit(c+4,"x3", false,-1);
    tracep->declBus(c+5,"s", false,-1, 1,0);
    tracep->declBit(c+6,"y", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmux41___024root__trace_init_top(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_init_top\n"); );
    // Body
    Vmux41___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux41___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux41___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux41___024root__trace_register(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux41___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux41___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux41___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux41___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_full_top_0\n"); );
    // Init
    Vmux41___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux41___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux41___024root__trace_full_sub_0(Vmux41___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->x0));
    bufp->fullBit(oldp+2,(vlSelf->x1));
    bufp->fullBit(oldp+3,(vlSelf->x2));
    bufp->fullBit(oldp+4,(vlSelf->x3));
    bufp->fullCData(oldp+5,(vlSelf->s),2);
    bufp->fullBit(oldp+6,(vlSelf->y));
}
