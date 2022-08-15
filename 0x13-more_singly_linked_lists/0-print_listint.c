#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: listint_t to prints
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 1;
	listint_t *holder = malloc(sizeof(h));

	if (!holder)
		return (0);
	if (h)
	{
		printf("%d\n", h->n);
		holder = h->next;
	}

	while (holder)
	{
		printf("%d\n", holder->n);
		holder = holder->next;
		++i;
	}
	free(holder);
	return (i);
}
