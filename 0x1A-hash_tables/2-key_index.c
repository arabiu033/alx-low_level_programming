#include "hash_tables.h"

/**
 * key_index( - return the key index where the array should be store
 * @key: key to work on
 * @size: size of the hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
