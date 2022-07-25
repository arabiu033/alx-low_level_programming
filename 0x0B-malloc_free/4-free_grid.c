#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function.
 * @grid: 2 dimensional array
 * @height: rows of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(*(grid + i++));
	free(grid);
}
