#include "search_algos.h"

/**
 * binary_search - search for a value in array using binary search
 * @array: array to search
 * @size: size of the array
 * @value: value to look for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, start, end, mid;
start = 0;
end = size - 1;

if (!array)
return (-1);

while (start <= end)
{
printf("Searching in array: ");
for (i = start; i <= end; i++)
printf("%d%s", array[i], i == end ? "\n" : ", ");

mid = (start + end) / 2;

if (array[mid] == value)
return (value);
else if (value > array[mid])
start = mid + 1;
else
end = mid - 1;
}

return (-1);
}
