#include <stdio.h>

/**
 * main - starting point
 *
 * Return: 0 success
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}

	putchar('\n');

	return (0);
}
