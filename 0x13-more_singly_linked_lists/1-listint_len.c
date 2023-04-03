#include "lists.h"

/**
 * listint_len - returns the number of element in a linked lists
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t noodes = 0;

	while (h != NULL)
	{
		h = h->next;
		noodes++;
	}
	return (noodes);
}
