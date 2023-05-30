#include "main.h"

/**
 * print_unsigned_hexadecimal - Prints an unsigned integer
 * in hexadecimal format
 * @num: The unsigned integer to print
 * Owned by flamonrose23 && lili852
 * Return: The number of characters printed
 */

int print_unsigned_hexadecimal(unsigned int num)
{
    int count = 0;
    unsigned int quotient = num / 16;
    int remainder = num % 16;

    if (quotient != 0)
        count += print_unsigned_hexadecimal(quotient);

    if (remainder < 10)
        putchar('0' + remainder);
    else
        putchar('a' + (remainder - 10));

    count++;

    return count;
}
