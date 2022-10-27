#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *prev, *next;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			next = ht->array[i];
			while (next != NULL)
			{
				prev = next;
				next = next->next;
				free(prev->key);
				free(prev->value);
				free(prev);
			}
		}
	}

	if (ht)
	{
		free(ht->array);
		free(ht);
	}
}
