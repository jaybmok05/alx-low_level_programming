#include "lists.h"

/**
 * dlistint_len - a function returns the number
 * of elements in a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
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

	/*traverse the elements in forward order*/
	for (; h != NULL; h = h->next)
		count++;

	return (count);
}
