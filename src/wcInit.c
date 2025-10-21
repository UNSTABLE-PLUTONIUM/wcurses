#include <wcurses.h>

plane stdplane;

void wcInit(void) {
	printf("\e[?1049h");
	printf("\e[?25l");

	struct winsize ws;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws);

	stdplane.size_y = ws.ws_row;
	stdplane.size_x = ws.ws_col;

	stdplane.size = stdplane.size_x * stdplane.size_y;

	stdplane.buffer = malloc(stdplane.size);
	memset(stdplane.buffer, ' ', stdplane.size);

	stdplane.byte_offset = 0;

	atexit(wcTerminate);
	signal(SIGINT, &wcurses_internal__SIGINT_handler);
}
