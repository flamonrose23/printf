#include "main.h"

/**
 * print_unsigned_hexadecimal - Prints an unsigned integer
 * in hexadecimal format
 * @num: The unsigned integer to print
 *
 * Return: The number of characters printed
 */

int print_unsigned_hexadecimal(unsigned int num)
{
int count = 0;
unsigned int remainder;

if (num >= 16)
count += print_unsigned_hexadecimal(num / 16);
remainder = num % 16;
if (remainder < 10)
_putchar('0' + remainder);
else
_putchar('A' + remainder - 10);
count++;
return (count);
}
