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

	for (a = 48; a < 58; a++)
		putchar(a);
	for (b = 97; b < 104; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
