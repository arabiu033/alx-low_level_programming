#include "main.h"

/**
 * times_table - time table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, s, x, y;

	s = x = y = 0;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			s = a * b;
			if (s < 10)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(s + 48);
			}
			else
			{
				x = s / 10;
				y = s % 10;
				_putchar(x + 48);
				_putchar(y + 48);
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
