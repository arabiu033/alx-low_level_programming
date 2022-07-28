#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: previusely allocated pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (!arr)
		return (NULL);
	for (i = 0; i < old_size; i++)
		arr[i] = *((char *)ptr + i);
	free(ptr);
	return (arr);
}
