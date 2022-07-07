#include "main.h"

/**
 * print_diagonal - draw diagonal line
 *
 * @n: parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 0, i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		while (a++ < i)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		a = 0;
	}
}
