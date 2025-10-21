#ifndef _WANNABE_CURSES_H
#define _WANNABE_CURSES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

typedef struct {
	char *buffer;
	int byte_offset;
	int size_y;
	int size_x;
	int size;
} plane;

extern plane stdplane;

extern void wcInit(void);
extern void wcTerminate(void);
extern void wcDisplay(void);
extern void wcPutchr(char chr);
extern void wcPutstr(char *str);
extern void wcMoveto(int y, int x);

extern void wcurses_internal__SIGINT_handler(int);

#endif
