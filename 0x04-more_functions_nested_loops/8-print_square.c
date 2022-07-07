#include "main.h"

/**
 * print_square - print # square
 *
 * @size: parameter
 *
 * Return: void nothing
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
			_putchar(35);
		_putchar('\n');
	}
}
