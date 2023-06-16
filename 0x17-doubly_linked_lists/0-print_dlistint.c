#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a
 * dlistint_t list
 * @h: head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	/*ensures that the current node is the head of the list*/
	while (h->prev != NULL)
		h = h->prev;

	/*print the elements in forward order*/
	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
