#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int isDigit(char *s);
/**
 * main - a program to multiply two arguments passed
 * @argc: arguments count parameter
 * @argv: string of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int i, j, result, sig;

	i = j = argc;
	result = 0;
	sig = 0;
	while (--i > 0 && sig != -1)
		sig = isDigit(*(argv + i));
	if (argc > 1)
	{
		while (--j > 0)
		{
			if (**(argv + j) == '*')
				continue;
			if (atoi(argv[j]) == 0 || sig == -1)
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[j]);
		}
	}
	printf("%d\n", result);
	return (0);
}

/**
 * isDigit - check whether a value is digit
 * @s: string to inspect
 * Return: 0 for a number
 */
int isDigit(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (!(*(s + i) >= 48 && *(s + i) <= 57))
			return (-1);
		++i;
	}
	return (0);
}
