#include "hash_tables.h"

/**
 * key_index - Get key index in hash table
 * @key: pointer to the key
 * @size: size of the hash table array
 *
 * Return: Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	idx = hash_djb2(key);
	idx %= size;

	return (idx);
}
