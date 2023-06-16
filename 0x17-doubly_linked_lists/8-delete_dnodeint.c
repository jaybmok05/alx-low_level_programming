#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes
 * the node at index of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int idx;

	if (*head == NULL)
        	return (-1);


	for (idx = 0; curr != NULL; idx++, curr = curr->next)
	{
		if (idx == index)
		{
			if (curr->prev != NULL)
				curr->prev->next = curr->next;
			else
				*head = curr->next;

			if (curr->next != NULL)
				curr->next->prev = curr->prev;

			free(curr);
			return (1);
		}
	}

	return (-1);
}
