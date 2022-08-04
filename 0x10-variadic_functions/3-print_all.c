#include "variadic_functions.h"

void dummy(void);
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void - nothing
 */
void print_all(const char * const format, ...)
{
	va_list arr;
	int count = 0, i = 0, sig = 1;
	char p;
	char *s;

	va_start(arr, format);
	while (format[i] != '\0')
	{
		p = format[i];
		if (p == 's' || p == 'c' || p == 'f' || p == 'i')
			++count;
		++i;
	}

	i = 0;
	while (format[i] != '\0')
	{
		--count;
		switch (format[i])
		{
		case 's':
			s = va_arg(arr, char *);
			printf("%s", s);
			break;
		case 'i':
			printf("%d", va_arg(arr, int));
			break;
		case 'c':
			printf("%c", '\0' + va_arg(arr, int));
			break;
		case 'f':
			printf("%f", va_arg(arr, double));
			break;
		default:
			sig = 0;
			++count;
		}
		++i;
		if (count && sig)
			printf(", ");
		sig = 1;
	}
	printf("\n");
}

/**
 * dummy - a dummy fuction
 * Return: void
 */
void dummy(void)
{
}
