#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include <nvboard.h>
#include <Vtop.h>


static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* top);


int main(int argc, char **argv) {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.clk = 0;

    while (1) {
        // dut.clk = ~dut.clk;
        nvboard_update();
        dut.eval();
    }

    return 0;
}
