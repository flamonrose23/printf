#include "main.h"
#include <stdio.h>

/**
 * _putchar - writing char c to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * On error, -1 returned and is set appropriately
 */

int _putchar(charc c)
{
	return (write(1, &c, 1));
}
