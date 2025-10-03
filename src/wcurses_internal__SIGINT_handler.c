#include <wcurses.h>

void wcurses_internal__SIGINT_handler(int sig) {
    wcTerminate();
	exit(EXIT_FAILURE);
}
