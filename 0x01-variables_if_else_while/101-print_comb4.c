#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55)
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
