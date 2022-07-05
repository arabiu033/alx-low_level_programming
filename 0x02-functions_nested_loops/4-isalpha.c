#include "main.h"

/**
 * _isalpha - check for case
 *
 * @c: paramter
 *
 * Return: int
 */
int _isalpha(int c)
{
	int a;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		a = 1;
	else
		a = 0;

	return (a);
}
