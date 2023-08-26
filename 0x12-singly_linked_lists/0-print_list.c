#include "lists.h"

/**
 * print_list - Prints elements of a list_t list
 * @h: Pointer to the start of the list
 *
 * Return: Total number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}

	return (cnt);
}
