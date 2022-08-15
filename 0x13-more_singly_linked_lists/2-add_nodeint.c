#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: previous head
 * @n: new value for new node
 * Return: the modified listint
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!temp)
	{
		printf("Error\n");
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
