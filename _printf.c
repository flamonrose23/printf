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
	  format++; /* Skip the '%' */

	  switch (*format)
	    {
	    case 'c':
	      {
		char c = (char)va_arg(args, int);
		_putchar(c);
		count++;
		break;
	      }
	    case 's':
	      {
		char *str = va_arg(args, char *);
		while (*str)
		  {
		   _putchar(*str);
		    str++;
		    count++;
		  }
		break;
	      }
	    case '%':
	      {
		_putchar('%');
		count++;
		break;
	      }
	    }
	}
      else
	{
	  _putchar(*format);
	  count++;
	}

      format++;
    }

  va_end(args);

  return (count);
}
