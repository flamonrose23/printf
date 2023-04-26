#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers starting with 1 and 2,
 * followed by a new line,
 * separated by comma, followed by a space.
 * Return: always 0.
 */
int main(void)
	{
		int count;
		unsigned long fib2 = 0, fib3 = 1, sum;


		for (count = 0; count < 50; count++)
		{
			sum = fib2 + fib3;
			printf("%lu", sum);


			fib2 = fib3;
			fib3 = sum;


			if (count == 49)
				printf("\n");
			else
				printf(", ");
		}


		return (0);
	}
