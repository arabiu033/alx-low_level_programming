#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: a linked list
 * Return: int number of element in a linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
