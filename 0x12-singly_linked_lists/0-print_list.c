#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: list containing values to print
 * Return: int number of values print
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
		++i;
		h = h->next;
	}

	return (i);
}
