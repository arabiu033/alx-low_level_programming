#include <stdio.h>

/**
 * main - starting point
 *
 * Return: nothing
 */
int main(void)
{
	int x, y, z;
	long int holder;

	x = z = 0;
	y = 1;
	holder = 0;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			holder += y;

		z = x + y;
		x = y;
		y = z;
	}

	printf("%ld\n", holder);

	return (0);
}
