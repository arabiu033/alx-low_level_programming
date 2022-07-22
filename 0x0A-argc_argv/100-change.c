#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count(int, int);
/**
 * main - calculate number of cents to pay
 * @argc: arguments counts
 * @argv: arguments passed
 * Return: 0 succe
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc == 2)
	{
		c = count(0, atoi(argv[1]));
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

/**
 * count - check for number of cents
 * @a: cents tracker
 * @val: changes left
 * Return: a, cents
 */
int count(int a, int val)
{
	if (val > 25)
	{
		a += val / 25;
		return (count(a, val % 25));
	}
	else if (val > 10)
	{
		a += val / 10;
		return (count(a, val % 10));
	}
	else if (val > 5)
	{
		a += val / 5;
		return (count(a, val % 5));
	}
	else if (val > 2)
	{
		a += val / 2;
		return (count(a, val % 2));
	}
	else
	{
		a += val;
	}

	return (a);
}
