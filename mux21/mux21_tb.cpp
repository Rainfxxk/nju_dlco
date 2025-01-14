#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmux21.h"

const int SIM_TIME = 100;

void generate_input(const std::unique_ptr<Vmux21> &mux21) {
    mux21->a = rand() % 2;
    mux21->b = rand() % 2;
    mux21->s = rand() % 2;
}

void check_output(const std::unique_ptr<Vmux21> &mux21) {
    if (mux21->s == 0) {
        if (mux21->y != mux21->a) {
            std::cout << "[ERROR]" << std::endl;
        }
    }
    else {
        if (mux21->y != mux21->b) {
            std::cout << "[ERROR]" << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    srand(time(NULL));
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    const std::unique_ptr<Vmux21> mux21{new Vmux21{contextp.get(), "TOP"}};
    VerilatedVcdC *trace = new VerilatedVcdC;

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    mux21->a = 0;
    mux21->b = 0;
    mux21->s = 0;

    mux21->trace(trace, 3);
    trace->open("waveform.vcd");

    std::cout << "start time: " << contextp->time() << std::endl;

    while (contextp->time() < SIM_TIME) {
        generate_input(mux21);

        mux21->eval();
        trace->dump(contextp->time());
        contextp->timeInc(1);

        check_output(mux21);
    }

    trace->close();
    mux21->final();

    return 0;
}


