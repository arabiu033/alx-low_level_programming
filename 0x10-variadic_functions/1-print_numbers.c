#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void - nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arr;

	va_start(arr, n);
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(arr, int),
		       separator && i != (n - 1) ? separator : "");
	printf("\n");
}
