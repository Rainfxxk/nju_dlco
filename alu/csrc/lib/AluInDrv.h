#ifndef ALU_IN_DRV_H
#define ALU_IN_DRV_H

#include <Valu.h>
#include "AluIn.h"

class AluInDrv {

private:

    Valu *alu;

public:
    AluInDrv(Valu *alu);

    void drive(AluIn *in);
};

#endif // ALU_IN_DRV_H
