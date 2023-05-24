#include "function_pointers.h"

/**
 * int_index - returning index place if comparaison = true, if else -1
 * @array: array to print
 * @size: size of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
