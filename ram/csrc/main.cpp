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

    // for (int i = 1; i < 160; i++) {
    //     dut.wr_en = 1;
    //     dut.clk = ~dut.clk;
    //     dut.addr = i / 10;
    //     dut.data_in = i / 10;

    //     dut.eval();
    // }

    while (1) {
        dut.clk = ~dut.clk;
        nvboard_update();
        dut.eval();
    }

    return 0;
}
