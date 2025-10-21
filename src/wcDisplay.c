#include <wcurses.h>

void wcDisplay(void) {
	for (int y = 0; y < stdplane.size_y; y++) {
		for (int x = 0; x < stdplane.size_x; x++) {
			printf("\e[%i;%iH%c", y+1, x+1, stdplane.buffer[(y * stdplane.size_x) + x]);
		}
	}
}
