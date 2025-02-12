#include <nvboard.h>
#include "Vdecode24.h"

void nvboard_bind_all_pins(Vdecode24* top) {
	nvboard_bind_pin( &top->x, 2, SW1, SW0);
	nvboard_bind_pin( &top->E, 1, SW2);
	nvboard_bind_pin( &top->y, 4, LD3, LD2, LD1, LD0);
}
