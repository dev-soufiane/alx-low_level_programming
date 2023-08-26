#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: Pointer to the head node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *c_node;

	if (!head)
		return;

	while ((c_node = head) != NULL)
	{
		head = head->next;
		free(c_node->str);
		free(c_node);
	}
}
