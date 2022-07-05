#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - return to home
 * @n: para
 * Return: void
 */
void print_to_98(int n)
{

	while (n < 98)
		printf("%d, ", n++);
	while (n > 98)
		printf("%d, ", n--);

	printf("%d\n", n);
}
