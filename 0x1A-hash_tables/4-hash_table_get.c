#include "hash_tables.h"

/**
 * hash_table_get - Retrieve value associated with key in hash table.
 * @ht: Hash table to search
 * @key: Key to look for
 *
 * Return: Value if key is found, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !ht->array)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
