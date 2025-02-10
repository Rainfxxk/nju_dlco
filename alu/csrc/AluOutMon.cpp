#include <Valu.h>

#include "AluOutMon.h"
#include "AluScb.h"

AluOutMon::AluOutMon(Valu *alu, AluScb *scb): alu(alu), scb(scb) {}

void AluOutMon::monitor() {
    if (this->is_skip) {
        this->is_skip = false;
    }
    else {
        AluOut *out = new AluOut;

        out->out = alu->Result;

        scb->writeOut(out); 
    }
}
