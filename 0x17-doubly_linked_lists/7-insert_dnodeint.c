#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)),  *current = *h;
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		for (i = 1; i < idx && current != NULL; i++)
			current = current->next;

		if (current != NULL)
		{
			new->prev = current;
			new->next = current->next;
			if (current->next != NULL)
				current->next->prev = new;
			current->next = new;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}

	return (new);
}
