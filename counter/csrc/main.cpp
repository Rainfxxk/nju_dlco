#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include <nvboard.h>
#include <Vtop.h>


static TOP_NAME dut;
static int counter = 0;

void nvboard_bind_all_pins(TOP_NAME* top);

void single_circle() {
    //printf("counter[%d]: %d\n", counter++, dut.out);

    dut.clk = 0;
    dut.eval();

    dut.clk = 1;
    dut.eval();
}


int main(int argc, char **argv) {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while (1) {
        nvboard_update();
        single_circle();
    }

    return 0;
}
