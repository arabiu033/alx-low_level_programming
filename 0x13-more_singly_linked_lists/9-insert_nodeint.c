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
	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	if (idx == 0)
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	while (holder)
	{
		prev = holder;
		next = holder->next;
		if (i == idx)
		{
			temp->n = n;
			temp->next = next;
			prev->next = temp;
			return (temp);
		}
		holder = next;
		++i;
	}
	if (!(idx - i) && *head)
	{
		temp->n = n;
		temp->next = next;
		prev->next = temp;
		return (temp);
	}
	free(temp);
	return (NULL);
}
