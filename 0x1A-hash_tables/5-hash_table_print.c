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

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (sig)
				printf(", ");

			inner = ht->array[i];
			while (inner)
			{
				sig = 1;
				printf("'%s': '%s'", inner->key, inner->value);
				inner = inner->next;
				if (inner)
					printf(", ");
			}
		}
	}

	printf("}\n");
}
