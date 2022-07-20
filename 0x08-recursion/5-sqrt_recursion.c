#include "main.h"

int test(int, int);

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: the number to calculate it ssquare root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (test(1, n));
}

/**
 * test - to test for square root
 * @a: iterative
 * @b: number
 * Return: int
 */
int test(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a < b / 4)
		return (test(a + 1, b));
	else
		return (-1);
}
