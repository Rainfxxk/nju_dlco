#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include <verilated.h>
#include <verilated_vcd_c.h>

#include "Vmux41.h"


const int SIM_TIME = 50;

void generate_input(Vmux41 *mux41) {
    mux41->x0 = rand()%2;
    mux41->x1 = rand()%2;
    mux41->x2 = rand()%2;
    mux41->x3 = rand()%2;
    mux41->s = rand()%4;
}

void check_output(Vmux41 *mux41) {
    switch (mux41->s) {
        case 0:
            if (mux41->y != mux41->x0) {
                std::cout << "[ERROR] output: " << mux41->y
                    << "expected: " << mux41->x0 << std::endl;
            }
            break;
        case 1:
            if (mux41->y != mux41->x1) {
                std::cout << "[ERROR] output: " << mux41->y
                    << "expected: " << mux41->x1 << std::endl;
            }
            break;
        case 2:
            if (mux41->y != mux41->x2) {
                std::cout << "[ERROR] output: " << mux41->y
                    << "expected: " << mux41->x2 << std::endl;
            }
            break;
        case 3:
            if (mux41->y != mux41->x3) {
                std::cout << "[ERROR] output: " << mux41->y
                    << "expected: " << mux41->x3 << std::endl;
            }
            break;
    }
}

int main(int argc, char **argv) {

    srand(time(NULL));

    VerilatedContext *contextp = new VerilatedContext;
    Vmux41 *mux41 = new Vmux41(contextp, "Top");
    VerilatedVcdC *trace = new VerilatedVcdC;

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    mux41->trace(trace, 3);
    trace->open("waveform.vcd");

    while (contextp->time() < SIM_TIME) {
        generate_input(mux41);

        mux41->eval();
        trace->dump(contextp->time());
        contextp->timeInc(1);

        check_output(mux41);
    }

    trace->close();
    mux41->final();

    return 0;
}
