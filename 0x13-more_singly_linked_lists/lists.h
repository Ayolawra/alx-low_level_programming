#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 * Description: singly linked list node struct
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s - singly linked list
 * @p: node pointers
 * @next: pointer to the next node
 *
 * Description: singly linked list pointers
 */

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_s;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);

#endif
