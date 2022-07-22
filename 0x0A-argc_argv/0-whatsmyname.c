#include "main.h"
#include <stdio.h>

/**
 * main - a program to print its file name
 * @argc: arguments count parameter
 * @argv: string of arguments passed
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
