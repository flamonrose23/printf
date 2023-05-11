#include "main.h"
#include <unistd.h>

/**
 * _putchar - writing char c to stdout
 * @c: char to print
 * Return: on success 1
 * On error, -1 returned and erno is not appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
