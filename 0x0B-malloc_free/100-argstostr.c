#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int length(char *);
void copy(char *, char*, int);

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: list of strings
 * @av: array of strings
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int len, i, l;
	char *str;

	if (!ac || !av)
		return (NULL);

	len = 1, i = 0;
	while (i < ac)
		len += length(av[i++]);

	l = 0, i = 0;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (i < ac)
	{
		copy(str, av[i], l);
		l += length(av[i++]) - 1;
		str[l++] = '\n';
	}

	return (str);
}


/**
 * length - return the string length
 * @str: string to get its length
 * Return: int length
 */
int length(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		++i;
	return (i + 1);
}


/**
 * copy - copy a string from one place to another
 * @str: string to copy;
 * @str1: where to copy the string to
 * @i: from
 * Return: void
 */
void copy(char *str, char *str1, int i)
{
	int k = 0;

	while (*(str1 + k) != '\0')
		*(str + i++) = *(str1 + k++);
}
