#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: numner of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arr;

	va_start(arr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arr, int);
	va_end(arr);
	return (sum);
}
