#include "main.h"
#include "stdio.h"

/**
 * reverse_array - print array in reverse fashion
 * @a: the array to be reversed
 * @n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
