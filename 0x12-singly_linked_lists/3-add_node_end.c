#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: previous linked list
 * @str: string
 * Return: new adjusted linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *s = NULL, *t = *head;

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	while (*head)
	{
		s = *head;
		*head = (*head)->next;
	}
	if (s)
	{
		s->next = temp;
		*head = t;
		return (*head);
	}
	else
	{
		*head = temp;
		return (*head);
	}
}
