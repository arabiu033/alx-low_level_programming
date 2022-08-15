#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: listint_t to prints
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	listint_t *holder = malloc(sizeof(listint_t));

	if (!holder)
	{
		printf("Error\n");
		return (1);
	}
	holder = NULL;
	if (h)
	{
		holder = h->next;
		++i;
	}

	while (holder)
	{
		holder = holder->next;
		++i;
	}
	free(holder);
	return (i);
}
