#include "main.h"

/**
 * reverse_array - print array in reverse fashion
 * @a: the array to be reversed
 * @n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
