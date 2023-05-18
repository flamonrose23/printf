#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocating a memory block using malloc and free
 * @ptr: pointer to memory previously allocated.
 * @old_size: size of allocated space of ptr
 * @new_size: new size of new memory block
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
