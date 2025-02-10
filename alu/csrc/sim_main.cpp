#include <verilated.h>
#include <verilated_vcd_c.h>
#include <stdio.h>
#include <Valu.h>

const static int SIM_TIME = 100;

int main(int argc, char **argv) {
    VerilatedContext *contextp = new VerilatedContext;
    Valu *alu = new Valu(contextp, "TOP");
    VerilatedVcdC *trace = new VerilatedVcdC;

    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    alu->trace(trace, 99);

    trace->open("waveform.vcd");

    for (;contextp->time() < SIM_TIME;contextp->timeInc(1)) {

    }

    trace->close();
    delete alu;
    delete contextp;

    return 0;
}
