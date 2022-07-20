#include "main.h"

/**
 * factorial - calculate factorial
 * @n: parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
