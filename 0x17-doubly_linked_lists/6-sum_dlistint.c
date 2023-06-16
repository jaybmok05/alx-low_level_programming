#include "lists.h"

/**
 * sum_dlistint - a function that returns
 * the sum of all the data (n) of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data in list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		for (sum = 0; head != NULL; head = head->next)
		{
			sum += head->n;
		}
	}

	return (sum);
}
