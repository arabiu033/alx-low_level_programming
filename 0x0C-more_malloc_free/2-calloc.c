#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: allocated memmory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *array;

	if (!nmemb || !size)
		return (NULL);

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);

	while (i < (nmemb * size))
		array[i++] = 0;
	return (array);
}
