#include "lists.h"

/**
 * free_dlistint -a function that
 * frees a dlistint_t list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	for (tmp = head; tmp != NULL; tmp = head)
	{
		head = head->next;
		free(tmp);
	}
}
