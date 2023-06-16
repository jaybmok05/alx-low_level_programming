#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: returns the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	for (idx = 0; head != NULL; idx++)
	{
		if (idx == index)
			break;
		head = head->next;
	}

	return (head);
}
