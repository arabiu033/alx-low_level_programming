#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 *  char.
 * @size: size of the array;
 * @c: char to fill the array with
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s = malloc(sizeof(char) * size);

	if (!(s) || !size)
		return (NULL);
	while (i < size)
		*(s + i++) = c;
	return (s);
}
