#include "main.h"

/**
 * _puts_recursion - print a string using recursion
 * @s: string to print
 * Return: void nothinh
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
