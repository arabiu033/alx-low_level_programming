#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 49;
	int e = 48;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (b == 57)
				e = 47;
			else
				e = b;

			if(a == 57 && b == 57)
				e = b;

			for (c = a; c <= 57; c++)
			{
				for (d = e + 1; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a == 57 && b == 56 && c == 57)
						;
					else
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
