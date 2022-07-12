#include "main.h"

/**
 * swap_int - swap two variables
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
