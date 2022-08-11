#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: previous link list
 * @str: string to add to the list
 * Return: new adjusted pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->next = *head;
	temp->str = strdup(str);
	temp->len = strlen(str);
	*head = temp;
	return (*head);
}
