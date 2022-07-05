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

	if (n < 0)
		n = n * -1;

	a = n % 10;
	_putchar(a + 48);

	return (a);
}
