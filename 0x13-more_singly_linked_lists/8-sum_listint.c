#include "lists.h"

/**
 * sum_listint -  calculates the sum of all the data (n) of a linked list
 * @head: head pointer
 *
 * Return: sum of all the data (n) of the list,
 * or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
