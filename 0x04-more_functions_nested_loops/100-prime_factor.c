#include <stdio.h>

/**
 * main - starting point
 *
 * Return: void nothing
 */
int main(void)
{
	unsigned long int n = 612852475143, i, j;

	j = n / 2;
	for (i = 1; i < j; ++i)
	{
		if (n % i == 0)
			printf("%lu ", i);
	}

	return (0);
}
