#include <wcurses.h>

void wcInit(void) {
	printf("\e[?1049h");
	printf("\e[H");
	printf("\e[0m");

	atexit(wcTerminate);
	signal(SIGINT, &wcurses_internal__SIGINT_handler);
}
