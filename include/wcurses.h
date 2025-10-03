#ifndef _WANNABE_CURSES_H
#define _WANNABE_CURSES_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <termios.h>
#include <stdbool.h>

extern void wcInit(void);
extern void wcTerminate(void);
extern void wcEchoInput(bool);
extern void wcBufferInput(bool);
extern void wcShowCursor(bool);

extern void wcurses_internal__SIGINT_handler(int);

#endif
