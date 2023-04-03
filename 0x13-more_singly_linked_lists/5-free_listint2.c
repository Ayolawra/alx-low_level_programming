#include "lists.h"

/**
 * free_listint2 - function to free int list
 * @head: head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *purr;

	if (head != NULL)
	{
		purr = *head;
		while ((temp = purr) != NULL)
		{
			purr = purr->next;
			free(temp);

		}
		*head = NULL;
	}
}
