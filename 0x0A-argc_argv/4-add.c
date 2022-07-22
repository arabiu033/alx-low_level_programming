#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program to multiply two arguments passed
 * @argc: arguments count parameter
 * @argv: string of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int sig, i, j, result;

	i = j = argc;
	result = 0;
	sig = 0;
	while (--i > 0)
		if (**(argv + i) == '0')
			**(argv + i) = '*';
	if (argc > 1)
	{
		while (--j > 0)
		{
			if (**(argv + j) == '*')
				continue;
			if (atoi(argv[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[j]);
		}
		sig = 1;
	}
	else
	{
		printf("Error\n");
		sig = 0;
	}
	if (sig)
		printf("%d\n", result);
	return (0);
}
