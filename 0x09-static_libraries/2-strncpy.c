#include <string.h>
#include "main.h"

/**
 * _strncpy - copy a particular string to another
 * @dest: string to work on
 * @src: string to copy
 * @n: number of characters to copy
 * Return: a pointer of the modified string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
