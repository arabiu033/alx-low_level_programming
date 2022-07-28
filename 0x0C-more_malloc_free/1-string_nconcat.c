#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of s2 to concatentates
 * Return: pointer of the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *newStr;

	i = j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	newStr = malloc(sizeof(s1) + n);
	if (!newStr)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(newStr + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + j) != '\0' && j <= n)
		*(newStr + i++) = *(s2 + j++);
	return (newStr);
}
