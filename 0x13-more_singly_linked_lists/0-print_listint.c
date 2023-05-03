#include "lists.h"

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list.
 * @head: pointer to the first node
 */

size_t print_listint(const listint_t *head)
{
	size_t num_of_ele;

	/*traversing the single linked list*/
	for (num_of_ele = 0; head != NULL; num_of_ele++)
	{
		printf("%d\n", head->n);
		/*points to the next node until NULL*/
		head = head->next;
	}

	return (num_of_ele);
}
