#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->clk, 1, SW12);
	nvboard_bind_pin( &top->data_in, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->op, 4, SW11, SW10, SW9, SW8);
	nvboard_bind_pin( &top->out, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
