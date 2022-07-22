#include "main.h"

/**
 * _isdigit -  checks for digits
 *
 * @c: parameter
 *
 * Return: 1 if true
 */
int _isdigit(int c)
{
	int holder = 0;

	if (c >= 48 && c <= 57)
		holder = 1;
	return (holder);
}
