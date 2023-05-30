#include "main.h"

/** 
* print_decimal - Prints a decimal integer
* @num: The decimal integer to print
*
* Return: The number of characters printed
*/

int print_decimal(int num)
{
int count = 0;

if (num < 0)
{
_putchar('-');
num = -num;
count++;
}

if (num / 10)
count += print_decimal(num / 10);

_putchar(num % 10 + '0');
count++;
return (count);
}
