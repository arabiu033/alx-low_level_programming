#include "main.h"
#include <stdlib.h>

void free_gridd(int **, int);
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
	{
		arr[i++] = (int *)malloc(height * sizeof(int));
		if (!arr[i - 1])
		{
			free_gridd(arr, i - 1);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			*(*(arr + i) + j) = 0;
	return (arr);
}


/**
 * free_gridd - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: 2 dimensional array
 * @height: rows of the array
 * Return: void
 */
void free_gridd(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(*(grid + i++));
	free(grid);
}
