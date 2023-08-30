#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head pointer
 * @idx: index where to add the new node
 * @n: integer for new node
 *
 * Return: new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *active;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	active = *head;

	while (active && idx > 1)
	{
		active = active->next;
		idx--;
	}

	if (active == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = active->next;
	active->next = new_node;

	return (new_node);
}
