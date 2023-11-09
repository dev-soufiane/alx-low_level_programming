#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: head pointer
 * @n: integer
 *
 * Return: New node adresss, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t newNode;

	newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = *(head);
	newNode->prev = NULL;

	if ((*head))
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
