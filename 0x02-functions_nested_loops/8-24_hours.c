#include "main.h"

/**
 * jack_bauer - print day minutes
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int a, b, x, y, z, w;

	x = y = z = w = 0;

	for (a = 0; a <= 23; ++a)
	{
		for (b = 0; b <= 59; b++)
		{
			if (a < 10)
				y = a;
			else
			{
				x = a / 10;
				y = a % 10;
			}

			if (b < 10)
				w = b;
			else
			{
				z = b / 10;
				w = b % 10;
			}

			_putchar(x + 48);
			_putchar(y + 48);
			_putchar(':');
			_putchar(z + 48);
			_putchar(w + 48);
			_putchar('\n');
		}
	}

}
