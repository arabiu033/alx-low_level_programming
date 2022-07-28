#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int length(char *);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatentates
 * Return: pointer of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *newStr;

	i = j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len = length(s2);
	if (n >= len)
		n = len;
	newStr = malloc(sizeof(char) * (length(s1) + 1));
	if (!newStr)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(newStr + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + j) != '\0' && j <= n)
		*(newStr + i++) = *(s2 + j++);
	*(newStr + i - 1) = '\0';
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

	while (*(str + i) != '\0')
		++i;
	return (i);
}
