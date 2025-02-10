#ifndef OPERATION_H
#define OPERATION_H

#include <stdint.h>

class AluIn {
public:
    enum operation{
        ADD,
        SUB,
        NOT,
        AND,
        OR,
        XOR,
        LES,
        EQU,
    };
    operation op;

    uint32_t A;
    uint32_t B;

    static AluIn *gen_in();
};

#endif // !OPERATION_H
