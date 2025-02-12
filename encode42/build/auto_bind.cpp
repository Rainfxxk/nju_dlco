#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->x, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW4);
	nvboard_bind_pin( &top->y, 2, LD1, LD0);
}
