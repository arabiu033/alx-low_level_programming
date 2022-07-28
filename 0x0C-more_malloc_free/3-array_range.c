#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number in the array
 * @max: the maximum number in the array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *num, i, j, x;

	if (min > max)
		return (NULL);

	x = max - min + 1;
	num = malloc(sizeof(*num) * x);
	if (!num)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
		num[j++] = i;

	return (num);
}
