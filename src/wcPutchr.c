#include <wcurses.h>

void wcPutchr(char chr) {
	stdplane.buffer[stdplane.byte_offset] = chr;
	stdplane.byte_offset++;
	wcDisplay();
}
