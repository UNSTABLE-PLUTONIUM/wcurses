#include <wcurses.h>

void wcPutstr(char *str) {
	for (int i = 0; str[i] != 0x0; i++) {
		wcPutchr(str[i]);
	}
}
