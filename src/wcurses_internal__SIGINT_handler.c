#include <wcurses.h>

void wcurses_internal__SIGINT_handler(int sig) {
	exit(EXIT_FAILURE);
}
