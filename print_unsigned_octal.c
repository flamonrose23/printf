#include "main.h"

/**
 * print__unsigned_octal - Printing octals
 * @num: number to be printed
 * Owned by flamonrose23 && lili852
 * Return: Number of octals printed
*/

int print_unsigned_octal(unsigned int num)
{
int count = 0;

if (num >= 8)
count += print_unsigned_octal(num / 8);
_putchar('0' + num % 8);
count++;
return (count);
}
