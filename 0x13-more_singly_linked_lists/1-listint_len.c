#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * Return: returns the number of elements in a linked listint_t list
 * @head: pointer to the first node
 */

size_t listint_len(const listint_t *head)
{
	size_t num_of_ele;

	for (num_of_ele = 0; head != NULL; num_of_ele++)
	{
		head = head->next;
	}

	return (num_of_ele);
}
