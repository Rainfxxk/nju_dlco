#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->en, 1, SW0);
	nvboard_bind_pin( &top->reset, 1, SW1);
	nvboard_bind_pin( &top->out, 48, DEC5P, SEG5G, SEG5F, SEG5E, SEG5D, SEG5C, SEG5B, SEG5A, DEC4P, SEG4G, SEG4F, SEG4E, SEG4D, SEG4C, SEG4B, SEG4A, DEC3P, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A, DEC2P, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A, DEC1P, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A, DEC0P, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}
