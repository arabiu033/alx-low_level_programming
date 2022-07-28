#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: void - nothing
 */
void *malloc_checked(unsigned int b)
{
	char *mal = malloc(b);

	if (!mal)
		exit(98);

	return (mal);
}
