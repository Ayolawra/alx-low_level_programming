#include "lists.h"

/**
 * pop_listint - function that deletes head of node and
 * returns the deleted node data
 * @head: head of list
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *purr;

	if (*head == NULL)
		return (0);

	purr = *head;

	hnode = purr->n;

	h = purr->next;

	free(purr);

	*head = h;

	return (hnode);
}
