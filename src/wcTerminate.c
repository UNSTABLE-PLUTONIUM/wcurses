#include <wcurses.h>

void wcTerminate(void) {
	printf("\e[?1049l");
	printf("\e[0m");

	wcEchoInput(true);
	wcBufferInput(true);
	wcShowCursor(true);
}
