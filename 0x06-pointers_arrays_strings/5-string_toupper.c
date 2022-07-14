#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change string case
 * @str: string to modify
 * Return: the modify string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
