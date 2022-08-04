#include "variadic_functions.h"

/**
 * print_strings -  prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void - nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arr;
	char *str;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arr, char *);
		printf("%s%s", str ? str : "(nil)",
		       separator && i != (n - 1) ? separator : "");
	}
	printf("\n");
}
