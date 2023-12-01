#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The table's size
 *
 * Return: Pointer to the table, or NULL if an error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(*new_table));
	hash_node_t **table_array;
	unsigned long int index;

	if (!new_table)
		return (NULL);  /*Return NULL on allocation failure*/
	table_array = malloc(size * sizeof(*table_array));

	if (!table_array)
	{
		free(new_table);
		return (NULL);  /*Return NULL on allocation failure*/
	}
	for (index = 0; index < size; index++)
	{
		table_array[index] = NULL;
	}
	new_table->size = size;
	new_table->array = table_array;

	return (new_table);
}
