#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: linked list to fee
 * Return: void - nothing
 */
void free_list(list_t *head)
{
	list_t *s;

	while (head)
	{
		s = head->next;
		free(head->str);
		free(head);
		head = s;
	}

}
