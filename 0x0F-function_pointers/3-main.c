#include "3-calc.h"

/**
 * main - testing fuction for our program
 * @ac: arguments passed count
 * @av: array of arguments passed
 * Return: 0 success
 */
int main(int ac, char *av[])
{
	int (*math)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(av[2][0] == '+' || av[2][0] == '-' || av[2][0] == '*'
	      || av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && atoi(av[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	math = get_op_func(av[2]);
	printf("%d\n", math(atoi(av[1]), atoi(av[3])));
	return (0);
}
