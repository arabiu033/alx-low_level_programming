#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize each word of a string
 * @str: the string to change
 * Return: the modify string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
			str[i] = toupper(str[i]);
		if (str[i] == ' ' || str[i] == '.')
			str[i + 1] = toupper(str[i + 1]);
		i++;
	}
	return (str);
}
