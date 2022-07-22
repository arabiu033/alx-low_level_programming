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
	long int result;

	if (argc > 1)
	{
		result = atol(argv[1]) * atol(argv[2]);
		printf("%ld\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
