#include <stdio.h>

/**
 * main - starting point
 *
 * Returning: 0 success
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a < 123; a++)
		putchar(a);
	for (b = 65; b < 91; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
