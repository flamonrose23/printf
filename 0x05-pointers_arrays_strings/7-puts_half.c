#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half input
 */

void puts_half(char *str)
{
	int o, n, longi;

	longi = 0;

	for (o = 0; str[o] != '\0'; o++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (o = n; str[o] != '\0'; o++)
		_putchar(str[o]);
	_putchar('\n');
}
