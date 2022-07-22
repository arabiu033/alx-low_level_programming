#include "main.h"
#include <stdio.h>

/**
 * main - a program to print the number of arguments passed to main
 * @argc: arguments count parameter
 * @argv: string of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc -  1);
	return (0);
}
