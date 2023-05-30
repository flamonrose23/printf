#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int parse_format(const char *format, va_list args);
int handle_conversion(char specifier, va_list args);
int _printf(const char *format, ...);
int print_char(char c);
int print_integer(int num);
int print_decimal(int num);
int print_string(char *str);
int print_unsigned(unsigned int num);
int print_unsigned_octal(unsigned int num);
int print_unsigned_hexadecimal(unsigned int num);
int _putchar(char c);

#endif /* MAIN_H */
