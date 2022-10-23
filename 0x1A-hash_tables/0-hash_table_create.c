#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 * @size: size of the table
 * Return: newly created hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = (hash_table_t*)malloc(sizeof(hash_table_t) * size);

	if (!hash)
		return NULL;
	return hash;
}
