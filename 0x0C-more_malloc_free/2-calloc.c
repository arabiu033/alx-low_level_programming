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
	char *array;

	if (!nmemb || !size)
		return (NULL);

	array = malloc(nmemb * size + 1);
	if (!array)
		return (NULL);

	while (nmemb)
		array[nmemb--] = 0;
	return (array);
}
