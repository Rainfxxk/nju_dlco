#include <iostream>
#include <deque>

#include "AluScb.h"
#include "AluIn.h"
#include "AluOut.h"

void AluScb::writeIn(AluIn *in) {
    this->in_q.push_back(in);
}

void AluScb::writeOut(AluOut *out) {

    if (this->in_q.empty()) {
        std::cout << "Fatal Error in AluScb: empty AluIn Queue" << std::endl;
    }

    AluIn* in;
    in = this->in_q.front();
    this->in_q.pop_front();

    switch (in->op) {
        
        case AluIn::ADD :
            if (in-> A + in->B != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: add mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << in->A + in->B
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::SUB :
            if (in->A - in->B != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: sub mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << in->A - in->B
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::NOT :
            if (~in->A != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: not mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << ~in->A
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::AND:
            if ((in->A & in->B) != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: and mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << (in->A & in->B)
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::OR:
            if ((in->A | in->B) != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: or mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << (in->A | in->B)
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::XOR:
            if ((in->A ^ in->B) != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: not mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << (in->A ^ in->B)
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::LES:
            if ((in->A < in->B) != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: les mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << (in->A < in->B)
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

        case AluIn::EQU:
            if ((in->A == in->B) != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: equ mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << (in->A == in->B)
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;
        default:
            if (0 != out->out) {
                std::cout << std::endl;
                std::cout << "AluScb: default mismatch" << std::endl;
                std::cout << "A: " << std::hex << in->A << " B: " << std::hex << in->B << std::endl;
                std::cout << "  Expected: " << std::hex << 0
                    << "  Actual: " << std::hex << out->out << std::endl;
            }
            break;

    }

}
