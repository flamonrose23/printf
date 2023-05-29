#include "main.h"
#include <stdlib.h>

/**
*_printf - printing output according to a format
*@format : char string
*Return: number of char printed
*/

int _printf(const char *format, ...) 
{
	unsigned int x = 0, count = 0;
	va_list t;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(va_list, format);
	while (format[x])
	{
		for (; format[x] != '%' && format[x]; x++)
		{
			_putchar(format[x]);
			count++;
		}

		if (!format[x])
			return (count);
		f = check_for_specifiers(&format[x + 1])
		if (f != NULL)
		{
			count += f(va_list);
			x += 2;
			continue;
		}
		if (!format[x + 1])
			return (-1);

		_putchar(format[x]);
		count++;
		if (format[x + 1] == '%')
			x += 2;
		else
			x++;
	}
	va_end(va_list);
	return (count);
}
