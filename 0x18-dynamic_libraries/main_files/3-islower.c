#include "main.h"

/**
 * _islower - check for alpha case
 *
 * @c: c
 *
 * Return: int
 */

int _islower(int c)
{
	int a;

	if (c >= 97 && c <= 122)
		a = 1;
	else
		a = 0;

	return (a);
}
