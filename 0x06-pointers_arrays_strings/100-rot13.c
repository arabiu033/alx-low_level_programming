#include "main.h"

/**
 * rot13 - encode using rot13 method
 * @str: string to encode
 * Return: encode string
 */
char *rot13(char *str)
{
	char n[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;
	char t;

	i = j = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
		    (str[i] >= 'a' && str[i] <= 'z'))
		{
			t = str[i];
			while (n[j] != t)
				++j;
			str[i] = p[j];
			j = 0;
		}
		++i;
	}
	return (str);
}
