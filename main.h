#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
*struct format - Struct op *@frmt: format to be printed
*@f: function to be associated
*/

typedef struct frmt f;

int _printf(const char *format, ...);
int handle_print(const char *frmt, int *x,
va_list t, char buffer[], int flags, int width, int precision, int size);

int print_char(va_list t, char buffer[],
	int flags, int width, int precision, int size);

int print_string(va_list t, char buffer[],
	int flags, int width, int precision, int size);

int print_percent(va_list t, char buffer[],
	int flags, int width, int precision, int size);

int print_int(va_list t, char buffer[],
	int flags, int width, int precision, int size);

Int _putchar(char c);

#endif
