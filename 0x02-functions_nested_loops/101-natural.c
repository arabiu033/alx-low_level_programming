#include <stdio.h>

/**
 * main - starting point
 *
 * Return: nothing
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 1024; n > 0; --n)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}

	printf("%d\n", sum);
	return (0);
}
