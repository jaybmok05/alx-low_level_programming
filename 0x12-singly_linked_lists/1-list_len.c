#include "lists.h"

/**
 * list_len - a function that returns the number of
 * elements in a linked list_t list.
 * Return: returns number of elements in a linked list.
 * @head: the list containing the elements.
 */

size_t list_len(const list_t *head)
{
	int num_of_nodes;

	for (num_of_nodes = 0; head != NULL; num_of_nodes++)
	{
		head = head->next;
	}

	return (num_of_nodes);
}
