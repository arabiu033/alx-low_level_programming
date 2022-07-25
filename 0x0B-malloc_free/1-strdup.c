#include "main.h"
#include <stdlib.h>

int length(char *);

/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int len, i;
	char *newStr;

	i = 0;
	if (str == NULL)
		return (NULL);

	len = length(str) + 1;
	newStr = malloc(sizeof(char) * len);
	while (++i < len)
		*(newStr + i - 1) = *(str + i - 1);
	return (newStr);
}

/**
 * length - return the string length
 * @str: string to get its length;
 * Return: int length;
 */
int length(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		++i;
	return (i);
}
