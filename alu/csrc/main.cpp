#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <cstdlib>
#include <ctime>
#include <Valu.h>

#include "AluIn.h"
#include "AluInDrv.h"
#include "AluInMon.h"
#include "AluOut.h"
#include "AluOutMon.h"

const int SIM_TIME = 1000;


int main(int argc, char **argv) {
    srand(time(NULL));

    VerilatedContext *context = new VerilatedContext;
    Valu *alu = new Valu(context, "TOP");
    VerilatedVcdC *trace = new VerilatedVcdC;

    context->traceEverOn(true);
    context->commandArgs(argc, argv);

    alu->trace(trace, 99);

    trace->open("waveform.vcd");

    AluScb *scb = new AluScb();
    AluInDrv *inDrv = new AluInDrv(alu);
    AluInMon *inMon = new AluInMon(alu, scb);
    AluOutMon *outMon = new AluOutMon(alu, scb);

    for (;context->time() < SIM_TIME; context->timeInc(1)) {
        alu->eval();

        AluIn *in = AluIn::gen_in();

        inDrv->drive(in);

        inMon->monitor();

        outMon->monitor();

        trace->dump(context->time());
    }

    trace->close();

    delete alu;
    delete scb;
    delete inDrv;
    delete inMon;
    delete outMon;

    return 0;
}
