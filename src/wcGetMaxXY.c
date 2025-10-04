#include <wcurses.h>

void wcGetMaxXY(int* x, int* y) {
	struct winsize ws;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws);
	*x = ws.ws_col;
	*y = ws.ws_row;
}
