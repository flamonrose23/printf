#include "main.h"

int print_unsigned_octal(unsigned int num)
{
int count = 0;

if (num >= 8)
count += print_unsigned_octal(num / 8);
_putchar('0' + num % 8);
count++;
return (count);
}
