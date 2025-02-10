#include "AluInMon.h"
#include "AluIn.h"
#include "AluScb.h"

AluInMon::AluInMon(Valu *alu, AluScb *scb): alu(alu), scb(scb) {}

void AluInMon::monitor() {
    AluIn *in = new AluIn;

    in->op = static_cast<AluIn::operation>(alu->op);
    in->A = alu->A;
    in->B = alu->B;
    
    scb->writeIn(in);
}
