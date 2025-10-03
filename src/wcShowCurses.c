#include <wcurses.h>

void wcShowCursor(bool input) {
	if (input) {
		printf("\e[?25h");
	}

	else {
		printf("\e[?25l");
	}
}
