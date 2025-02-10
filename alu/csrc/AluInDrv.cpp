#include <Valu.h>
#include "AluInDrv.h"
#include "AluIn.h"

AluInDrv::AluInDrv(Valu *alu) : alu(alu) {}

void AluInDrv::drive(AluIn *in) {
    if (in != nullptr) {
        this->alu->op = in->op;
        this->alu->A = in->A;
        this->alu->B = in->B;

        delete in;
    }
}
