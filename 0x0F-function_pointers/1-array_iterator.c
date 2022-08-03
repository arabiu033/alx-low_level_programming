#include "function_pointers.h"

/**
 * array_iterator - iterate through calling the right fuctions
 * @array: array to iterate over
 * @size: size of the array
 * @action: the function to call for the iteration
 * Return: void - nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
