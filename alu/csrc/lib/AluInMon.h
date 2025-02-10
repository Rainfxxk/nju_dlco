#ifndef ALU_IN_MON_H
#define ALU_IN_MON_H

#include <Valu.h>

#include "AluIn.h"
#include "AluScb.h"


class AluInMon {
private:
    Valu *alu;
    AluScb *scb;

public:
    AluInMon(Valu *alu, AluScb *scb);

    void monitor();
};

#endif // !ALU_IN_MON_H
