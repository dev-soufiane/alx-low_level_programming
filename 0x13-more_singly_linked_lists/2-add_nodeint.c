#include "lists.h"

/**
 * add_nodeint - Adds node at list start
 * @head: head pointer
 * @n: integer to add in new node
 *
 * Return: Address of the new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuNode;

	nuNode = malloc(sizeof(listint_t));

	if (nuNode == NULL)
		return (NULL);

	nuNode->n = n;
	nuNode->next = *head;
	*head = nuNode;

	return (*head);
}
