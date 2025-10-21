#include <wcurses.h>

void wcMoveto(int y, int x) {
	stdplane.byte_offset = (y * stdplane.size_x) + x;
}
