#include <wcurses.h>

void wcBufferInput(bool input) {
	struct termios TerminalSettings;
	tcgetattr(STDIN_FILENO, &TerminalSettings);

	if (input) {
		TerminalSettings.c_lflag |= ICANON;
	}

	else {
		TerminalSettings.c_lflag &= ~ICANON;
	}

	tcsetattr(STDIN_FILENO, TCSANOW, &TerminalSettings);
}
