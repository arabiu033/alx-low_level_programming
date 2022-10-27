#include "hash_tables.h"

/**
 * hash_table_set - add a new node to the hash node
 * @ht: the hash table to add the node to
 * @key: the key to determine the index to add the value
 * @value: the value to add
 * Return: 1 - success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *dummy;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
		return (0);

	if (!ht->array[index])
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}

	dummy = ht->array[index];
	while (dummy)
	{
		if (!strcmp(new_node->key, dummy->key))
		{
			free(dummy->value);
			dummy->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		dummy = dummy->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
