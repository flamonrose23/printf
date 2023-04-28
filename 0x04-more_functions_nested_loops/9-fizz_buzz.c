#include "main.h"
#include <stdio.h>

/**
 * main - printing numbers from 1 to 100, followed by a new line
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * Return: always 0
 */

int main(void)
{
	int x
	x = 1;
	printf("%d", x);

	for (x = 2; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
