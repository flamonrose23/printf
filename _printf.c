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
	      {
		char c = (char)va_arg(args, int);
		count += print_char(c);
		break;
	      }
	    case 's':
	      {
		char *str = va_arg(args, char *);
		count += print_string(str);
		break;
	      }
	    case 'd':
	    case 'i':
	      {
		int num = va_arg(args, int);
		count += print_integer(num);
		break;
	      }
	    case '%':
	      {
		count += print_char('%');
		break;
	      }
	    }
	}
      else
	{
	  count += print_char(*format);
	}

      format++;
    }

  va_end(args);

  return (count);
}
