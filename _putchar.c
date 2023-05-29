#include "main.h"

/**
 * _putchar - printing char c to stdout
 * @c: char to print
 *
 * Return: on success 1.
 * On error, -1 returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
