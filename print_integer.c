#include "main.h"

int print_integer(int num)
{
int count = 0;

if (num < 0)
{
_putchar('-');
num = -num;
count++;
}

if (num >= 10)
{
count += print_integer(num / 10);
}

_putchar('0' + num % 10);
count++;

return (count);
}
