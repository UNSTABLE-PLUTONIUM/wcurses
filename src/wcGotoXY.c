#include <wcurses.h>

void wcGotoXY(int x, int y) {
	printf("\e[%i;%iH", y, x);
}
