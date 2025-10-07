#ifndef _WANNABE_CURSES_H
#define _WANNABE_CURSES_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <termios.h>
#include <sys/ioctl.h>

#define ERROR -1
#define KEY_ESCAPE 1000
#define KEY_UP 1001
#define KEY_DOWN 1002
#define KEY_RIGHT 1003
#define KEY_LEFT 1004

extern void wcInit(void);
extern void wcTerminate(void);
extern void wcEchoInput(bool);
extern void wcBufferInput(bool);
extern void wcShowCursor(bool);
extern void wcGotoXY(int, int);
extern void wcGetMaxXY(int*, int*);
extern void wcRefresh(void);
extern int wcGetch();
extern int wcGetche();

extern void wcurses_internal__SIGINT_handler(int);

#endif
