#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: head pointer
 * @idx: index
 * @n: integer
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		i = 1;
		while (*h != NULL)
		{
			if (i == idx)
			{
				node = malloc(sizeof(dlistint_t));
				node->n = n;
				node->prev = *h;
				node->next = (*h)->next;
				(*h)->next = node;
			}
			*h = (*h)->next;
			i++;
		}
	}

	if ((*h)->next == NULL)
	{
		node = add_dnodeint_end(h, n);
	}

	return (node);
}
