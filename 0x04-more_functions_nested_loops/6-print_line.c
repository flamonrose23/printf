#include "main.h"

/**
 * print_line - printing straight line in the terminal
 * @n: the number of times the character should be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		int c;

		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
