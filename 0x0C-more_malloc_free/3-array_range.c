#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ar;
	int x;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		ar[x] = min;

	return (ar);
}
