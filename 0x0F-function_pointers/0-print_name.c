#include "function_pointers.h"

/**
 * print_name - fuction that accepts a function pointer and name to print
 * @name: the name to print
 * @f: the fuction pointer
 * Return: void - nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
