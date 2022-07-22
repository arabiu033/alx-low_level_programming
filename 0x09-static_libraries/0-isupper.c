#include "main.h"

/**
 * _isupper - check for upper case characters
 *
 * @c: parameter
 *
 * Return: 1 if true
 */
int _isupper(int c)
{
	int holder = 0;

	if (c >= 65 && c <= 90)
		holder = 1;
	return (holder);
}
