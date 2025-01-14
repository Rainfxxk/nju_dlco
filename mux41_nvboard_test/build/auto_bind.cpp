#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->x0, 1, SW0);
	nvboard_bind_pin( &top->x1, 1, SW1);
	nvboard_bind_pin( &top->x2, 1, SW2);
	nvboard_bind_pin( &top->x3, 1, SW3);
	nvboard_bind_pin( &top->s, 2, SW5, SW4);
	nvboard_bind_pin( &top->y, 1, LD0);
}
