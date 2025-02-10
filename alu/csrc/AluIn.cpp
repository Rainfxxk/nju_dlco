#include <stdlib.h>

#include "AluIn.h"

AluIn *AluIn::gen_in() {
    AluIn *in = new AluIn;

    in->op = static_cast<AluIn::operation>(rand() % 8);
    in->A = rand();
    in->B = rand();

    return in;
};
