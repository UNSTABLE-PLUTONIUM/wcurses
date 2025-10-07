#include <wcurses.h>

int wcGetch() {
	struct termios OldTerminalSettings, NewTerminalSettings;
	tcgetattr(STDIN_FILENO, &OldTerminalSettings);

	NewTerminalSettings = OldTerminalSettings;

	NewTerminalSettings.c_lflag &= ~ICANON;

	tcsetattr(STDIN_FILENO, TCSANOW, NewTerminalSettings);

	ssize_t BytesRead;
	char Keypress[3];

	BytesRead = read(STDIN_FILENO, Keypress, 3);

	if (BytesRead <= 0) {
		return ERROR;
	}

	int ReturnedValue = (unsigned char)Keypress[0];

	if (Keypress[0] == 0x1b) {
		if (BytesRead == 3 && Keypress[1] == '[') {
			switch (Keypress[2]) {
				case 'A': ReturnedValue = KEY_UP; break;
				case 'B': ReturnedValue = KEY_DOWN; break;
				case 'C': ReturnedValue = KEY_RIGHT; break;
				case 'D': ReturnedValue = KEY_LEFT; break;
			}
		}

		else if (BytesRead == 1) {
			ReturnedValue = KEY_ESCAPE;
		}
	}

	tcsetattr(STDIN_FILENO, TCSANOW, OldTerminalSettings);

	return ReturnedValue;
}
