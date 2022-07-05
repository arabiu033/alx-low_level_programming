#include "main.h"

void dummy(void);
/**
 * print_times_table - time table
 *
 * @n: para
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, s, x, y, p, w;

	s = x = y = p = w = 0;

	if (n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			p = a * b;
			if (p < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(p + 48);
			}

			if (p >= 10 && p < 100)
			{
				_putchar(' ');
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}

			if (p >= 100)
			{
				s = p % 100;
				_putchar((p / 100) + 48);
				_putchar((s / 10) + 48);
				_putchar((s % 10) + 48);
			}

			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * dummy - dummy fuction to trick betty
 * Return: void
 */
void dummy(void)
{
}
