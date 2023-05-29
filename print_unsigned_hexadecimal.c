#include "main.h"

int print_unsigned_hexadecimal(unsigned int num)
{
	int count = 0;
	int remainder;

	if (num >= 16)
		count += print_unsigned_hexadecimal(num / 16);

	remainder = num % 16;
	if (remainder < 10)
		putchar('0' + remainder);
	else
		putchar('A' + remainder - 10);

	count++;

	return count;
}
