#include "main.h"

/**
<<<<<<< HEAD

 * _memset - Fill memory with a constant byte

 * @s: memory area to fill

 * @b: constant byte to fill

 * @n: bytes of memory area to fill

 *

 * Return: the memory area filled

 */

=======
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
>>>>>>> 5202a08fa19c05ae642090a8eaf2a76650266c90
char *_memset(char *s, char b, unsigned int n)
	
{
<<<<<<< HEAD
	
	unsigned int a;
	

	
	for (a = 0; a < n; a++)
		
	{
		
		s[a] = b;
		
=======
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
>>>>>>> 5202a08fa19c05ae642090a8eaf2a76650266c90
	}
	

<<<<<<< HEAD
	
	return (s);
	
=======
	return (s);
>>>>>>> 5202a08fa19c05ae642090a8eaf2a76650266c90
}
