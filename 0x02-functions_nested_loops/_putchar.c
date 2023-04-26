#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing the character c to stdout
 * @c: The character to print
 *
 * Return: on Success 1.
 * On error, -1 is returned, and errno is set adequat
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
