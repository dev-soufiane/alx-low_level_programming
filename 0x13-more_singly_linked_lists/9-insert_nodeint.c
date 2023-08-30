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
	unsigned int cnt = 0;

	listint_t *node;
	listint_t *active;

	node = malloc(sizeof(listint_t));

	if (*head == NULL || node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	active = *head;

	while (active)
	{
		if (cnt == idx - 1)
		{
			node->next = active->next;
			active->next = node;
			return (node);
		}
		active = active->next;
		cnt++;
	}
	free(node);

	return (NULL);
}
