#include <string.h>
#include "main.h"

/**
 * _strncat - append specify number of characters
 * @dest: string to modify
 * @src: string to append
 * @n: number of characters to be appended
 * Return: a pointer of the appended string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
