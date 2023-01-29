#include "search_algos.h"

/**
 * linear_search - search for a value in array using linear search
 * @array: array to search
 * @size: size of the array
 * @value: value to look for
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (!array)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
