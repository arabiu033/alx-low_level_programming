#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to array
 */
int **alloc_grid(int height, int width)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(width * sizeof(int *));
	if (!arr)
		return (NULL);

	i = j = 0;
	while (i < width)
		arr[i++] = (int *)malloc(height * sizeof(int));

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			*(*(arr + i) + j) = 0;
	return (arr);
}
