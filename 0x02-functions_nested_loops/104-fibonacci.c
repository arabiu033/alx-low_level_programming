#include <stdio.h>

/**
 * main - starting point
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long x, y, z, i;

	x = z = 0;
	y = 1;

	for (i = 0; i < 98; i++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	return (0);
}
