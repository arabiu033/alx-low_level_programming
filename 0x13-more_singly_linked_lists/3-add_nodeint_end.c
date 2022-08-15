#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: listint
 * @n: new value
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *hold = *head;

	if (!temp)
		return (NULL);

	while (hold)
	{
		if (!(hold->next))
			break;
		hold = hold->next;
	}

	temp->n = n;
	temp->next = NULL;
	if (!(*head))
	{
		*head = temp;
		return (*head);
	}
	hold->next = temp;

	return (*head);
}
