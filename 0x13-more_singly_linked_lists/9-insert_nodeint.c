#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the list
 * @idx: location to add new node
 * @n: new node value
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *holder, *temp, *prev, *next;

	holder = *head;
	while (holder && i <= idx)
	{
		prev = holder;
		next = holder->next;
		if (i++ == idx)
		{
			temp = malloc(sizeof(listint_t));
			if (!temp)
				return (NULL);
			temp->n = n;
			temp->next = next;
			prev->next = temp;
			break;
		}
		holder = holder->next;
	}

	return (NULL);
}
