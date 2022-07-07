#include "main.h"

/**
 * print_line - draw a straight line
 *
 * @n: length of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		++i;
		_putchar(95);
	}

	_putchar('\n');
}
