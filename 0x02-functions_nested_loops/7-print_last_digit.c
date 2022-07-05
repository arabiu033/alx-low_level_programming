#include "main.h"

/**
 * print_last_digit - print and return last digit
 *
 * @n: para
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
		a = a * -1;

	_putchar(a + 48);

	return (a);
}
