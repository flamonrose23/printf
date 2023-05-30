#include "main.h"

/**
 * print_string - Prints a string of characters
 * @str: The string to be printed
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
int count = 0;

if (!str)
{
write(1, "(null)", 6);
return (6);
}
while (*str)
{
_putchar(*str);
str++;
count++;
}

return (count);
}
