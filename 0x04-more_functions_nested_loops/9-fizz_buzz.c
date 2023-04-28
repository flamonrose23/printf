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
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 3 == 0 && o % 5 != 0)
		{
			printf(" Fizz");
		} else if (o % 5 == 0 && o % 3 != 0)
		{
			printf(" Buzz");
		} else if (o % 3 == 0 && o % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (o == 1)
		{
			printf("%d", o);
		} else
		{
			printf(" %d", o);
		}
	}
	printf("\n");

	return (0);
}
