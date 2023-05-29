#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: Format string
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
count += print_char((char)va_arg(args, int));
break;
case 's':
count += print_string(va_arg(args, char *));
break;
case 'd':
case 'i':
count += print_integer(va_arg(args, int));
break;
case 'u':
count += print_unsigned(va_arg(args, unsigned int));
break;
case 'o':
count += print_unsigned_octal(va_arg(args, unsigned int));
break;
case 'x':
case 'X':
count += print_unsigned_hexadecimal(va_arg(args, unsigned int));
break;
case '%':
count += print_char('%');
break;
}
}
else
count += print_char(*format);
format++;
}
va_end(args);
return (count);
}
