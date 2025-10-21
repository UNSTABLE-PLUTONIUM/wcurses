#include <wcurses.h>

void wcTerminate(void) {
	printf("\e[?1049l");
	printf("\e[?25h");
	if (stdplane.buffer == NULL) {
		free(stdplane.buffer);
	}
}
