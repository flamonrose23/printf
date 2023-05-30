#include "main.h"

/**
 * print_integer - printing integers
 * @num: number to be printed
 * Owned by flamonrose23 && lili852
 * Return: number of integers printed
 */

int print_integer(int num)
{
int count = 0;

if (num < 0)
{
_putchar('-');
num = -num;
count++;
}

if (num <= 9)
{
count += _putchar(num + '0');
}

if (num >= 10)
{
count += print_integer(num / 10);
}

_putchar('0' + num % 10);
count++;

return (count);
}
