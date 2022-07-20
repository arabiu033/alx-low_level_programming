#include "main.h"

int prime(int, int);

/**
 * is_prime_number - prime checker
 * @n: number to check
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}

/**
 * prime - the engine
 * @a: iterative
 * @b: num
 * Return: int
 */
int prime(int a, int b)
{
	if (b <= 1 || b % a == 0)
		return (0);
	else if (a < b / 2)
		return (prime(a + 1, b));
	else
		return (1);
}
