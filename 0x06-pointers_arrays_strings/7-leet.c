#include "main.h"
#include <ctype.h>

/**
 * leet - encoding function
 * @str: string to encode
 * Return: modify string
 */
char *leet(char *str)
{
	char a[6] = "AEOTL";
	char n[6] = "43071";
	char t;
	int i, j;

	i = j = 0;
	while (str[i])
	{
		t = toupper(str[i]);
		if (t == 'A' || t == 'E' || t == 'O' || t == 'T' || t == 'L')
		{
			while (a[j] != t)
				++j;
			str[i] = n[j];
			j = 0;
		}
		++i;
	}

	return (str);
}
