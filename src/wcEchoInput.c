#include <wcurses.h>

void wcEchoInput(bool input) {
	struct termios TerminalSettings;
	tcgetattr(STDIN_FILENO, &TerminalSettings);

	if (input == true) {
		TerminalSettings.c_lflag |= ECHO;
	}

	else {
		TerminalSettings.c_lflag &= ~ECHO;
	}

	tcsetattr(STDIN_FILENO, TCSANOW, &TerminalSettings);
}
