#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @num: The unsigned integer to print
 * Owned by flamonrose23 && lili852
 * Return: The number of characters printed
 */

int print_unsigned(unsigned int num)
{
int count = 0;
unsigned int divisor = 1;
unsigned int n = num;

while (n / divisor > 9)
divisor *= 10;

while (divisor != 0)
{
_putchar('0' + n / divisor);
count++;
n %= divisor;
divisor /= 10;
}

return (count);
}
