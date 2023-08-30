#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: index of the node
 *
 * Return: nth node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *target;
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (cnt == index)
		{
			target = head;
			return (target);
		}

		head = head->next;
		cnt++;
	}

	return (NULL);
}
