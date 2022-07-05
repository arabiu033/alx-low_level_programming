#include "main.h"

/**
 * print_sign - tell the sign of a number
 *
 * @n: para
 *
 * Return: int
 */
int print_sign(int n)
{
	int a, b;

	if (n == 0)
		a = 0, b = 48;
	else if (n > 0)
		a = 1, b = 43;
	else
		a = -1, b = 45;

	_putchar(b);

	return (a);
}
