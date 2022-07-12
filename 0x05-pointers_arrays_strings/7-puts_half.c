#include <string.h>
#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the string to print
 * Return: void nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i >= len / 2 && len % 2 == 0)
			_putchar(*(str + i));
		else if (i > len / 2 && len % 2 != 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
