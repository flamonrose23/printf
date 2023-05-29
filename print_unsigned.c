#include "main.h"

int print_unsigned(unsigned int num)
{
	int count = 0;

	if (num >= 10)
		count += print_unsigned(num / 10);

	_putchar('0' + num % 10);
	count++;

	return (count);
}
