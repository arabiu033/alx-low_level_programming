#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *inner;
	unsigned int i;
	int sig = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			sig = 1;
			inner = ht->array[i];
			while (inner)
			{
				printf("'%s': '%s', ", inner->key, inner->value);
				inner = inner->next;
			}
		}
	}
	if (sig)
		printf("\b\b}\n");
	else
		printf("}\n");
}
