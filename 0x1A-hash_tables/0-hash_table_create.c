#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 * @size: size of the table
 * Return: newly created hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
