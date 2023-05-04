#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * Return: returns the sum of all the data (n)
 * @head: pointer to the first node of the list.
 */

int sum_listint(listint_t *head)
{
	int data_sum = 0;
	listint_t *node_holder;

	node_holder = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		/*traverse and add value of n to data_sum for each iteration*/
		for (; node_holder != NULL; node_holder = node_holder->next)
		{
			/*pointer to the next node*/
			data_sum += node_holder->n;
		}
	}
	return (data_sum);
}
