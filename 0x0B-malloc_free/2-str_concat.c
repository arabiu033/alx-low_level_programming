#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int length(char *);
void copy(char *, char *, int);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *newStr;

	i = 0;
	j = length(s1);
	len = j + length(s2) + 1;
	newStr = malloc(sizeof(char) * len);

	if (!newStr)
		return (NULL);

	copy(newStr, s1, i);
	copy(newStr, s2, j);

	*(newStr + len) = '\0';
	return (newStr);
}

/**
 * length - return the string length
 * @str: string to get its length
 * Return: int length
 */
int length(char *str)
{
	int i = 0;

	if (!str)
		str = "";

	while (*(str + i) != '\0')
		++i;
	return (i);
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
