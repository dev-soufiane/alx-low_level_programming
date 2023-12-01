#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 *
 * Return: (1) for success, (0) for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	if (!ht || !key || !(*key))
		return (0);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[index]))
	{
		ht->array[index] = new_node;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp)  /* Update existing node */
		{
			free(tmp->value);
			tmp->value = strdup(value);
			free(new_node->key);
			free(new_node);
			return (1);
		}
		tmp = ht->array[index]; /* Collision, add new node at the beginning */
		new_node->next = tmp;
		ht->array[index] = new_node;
	}
	return (1);
}
