#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string
 * Owned by flamonrose23 && lili852
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = parse_format(format, args);
	va_end(args);

	return (count);
}

/**
 * parse_format - Parses and prints the format string
 * @format: The format string
 * @args: The variable arguments list
 *
 * Return: The number of characters printed
 */
int parse_format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else if (format[i + 1])
		{
			count += handle_conversion(format[i + 1], args);
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	return (count);
}

/**
 * handle_conversion - Handles the conversion specifier
 * @specifier: The conversion specifier
 * @args: The variable arguments list
 *
 * Return: The number of characters printed
 */
int handle_conversion(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		case '%':
			_putchar('%');
			return (1);
		case 'd':
		case 'i':
			return (print_integer(va_arg(args, int)));
		case 'u':
		return (print_unsigned(va_arg(args, unsigned int)));
		case 'o':
			return (print_unsigned_octal(va_arg(args, unsigned int)));
		case 'x':
			return (print_unsigned_hexadecimal(va_arg(args, unsigned int)));
		default:
			_putchar('%');
			_putchar(specifier);
			return (2);
	}
}
