#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */
int main(void)
{
	int a = 48, b = 48, c = 48, d = 49;
	int e = 0;

	while (a <= 57)
	{
		for ( ; d <= 57; d++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			putchar(c);
			putchar(d);

			if (e < 9898)
			{
				putchar(44);
				putchar(' ');
			}
			++e;
		}

		if (d > 57)
		{
			++c;
			d = 48;
		}

		if (c > 57)
		{
			++b;
			c = 48;
		}

		if (b > 57)
		{
			a++;
			b = 48;
		}

		if (e > 9890)
		{
			a = 100;
		}

	}
	putchar('\n');

	return (0);
}
