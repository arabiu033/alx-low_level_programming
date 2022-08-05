#include <stdio.h>

/**
 * main - start
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
