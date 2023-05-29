#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_integer(int num);
int print_string(char *str);
int print_unsigned(unsigned int num);
int print_unsigned_octal(unsigned int num);
int print_unsigned_hexadecimal(unsigned int num);
int _putchar(char c);

#endif /* MAIN_H */
