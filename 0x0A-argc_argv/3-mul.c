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
	int result;
	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
