#ifndef ALU_OUT_MON_H
#define ALU_OUT_MON_H

#include <Valu.h>

#include <AluOut.h>
#include <AluScb.h>

class AluOutMon {
private:
    Valu *alu;
    AluScb *scb;
    bool is_skip = true;

public:
    AluOutMon(Valu *alu, AluScb *scb);

    void monitor(); 
};

#endif // !ALU_OUT_MON_H
