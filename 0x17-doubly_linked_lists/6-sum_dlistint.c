#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a linked list.
 * @head: head pointer
 *
 * Return: Sum of all the data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
