#ifndef ALU_SCB_H
#define ALU_SCB_H

#include <deque>

#include "AluIn.h"
#include "AluOut.h"

class AluScb {
private:
    std::deque<AluIn*> in_q;

public:
    void writeIn(AluIn *in);

    void writeOut(AluOut *out);
};

#endif //ALU_SCB_H
