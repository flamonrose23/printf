#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - printing numbers followed by new line
 * @separator: string printed
 * @n: number of integers passed to function
 * @...: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int ind;

	va_start(nums, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(nums, int));

		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
