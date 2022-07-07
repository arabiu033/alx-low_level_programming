#include "main.h"

/**
 * more_numbers - another number printing
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 48, b = 48, c, i;

	for (i = 0; i < 10; i++)
	{
		while (b < 53)
		{
			if (a <= 57)
				c = a++;
			else
				c = 49;
			_putchar(c);

			if (a == 58 && c == 49)
				_putchar(b++);
		}
		a = 48, b = 48;
		_putchar('\n');
	}
}
