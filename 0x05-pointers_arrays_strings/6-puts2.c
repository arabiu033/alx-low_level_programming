#include "main.h"
#include <string.h>

/**
 * puts2 - print string in a strange way
 * @str: string to print
 * Return: void nothing
 */
void puts2(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
