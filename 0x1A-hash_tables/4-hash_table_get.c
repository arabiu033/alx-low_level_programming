#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: Return the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *dummy;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	dummy = ht->array[index];
	while (dummy)
	{
		if (!strcmp(key, dummy->key))
		{
			return (dummy->value);
		}
		dummy = dummy->next;
	}
	return (NULL);
}
