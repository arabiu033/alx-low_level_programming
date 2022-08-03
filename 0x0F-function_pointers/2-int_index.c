#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to work searches
 * @size: the array size
 * @cmp: a pointer fuction to do the searches
 * Return: int (-1) fail or positive to indicate the index of the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, sig;

	if (!array || size <= 0 || !(*cmp))
		return (-1);

	i = sig = 0;

	while (i < size && !sig)
		sig = (*cmp)(*(array + i++));
	if (!sig)
		return (-1);

	return (--i);
}
