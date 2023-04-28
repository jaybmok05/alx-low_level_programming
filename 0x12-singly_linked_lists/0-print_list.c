#include "lists.h"

/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 * Return: the number of nodes
 * @head: the list containing the elements
 */

size_t print_list(const list_t *head)
{
	int num_of_nodes;

	/*loop over head*/
	for (num_of_nodes = 0; head != NULL; num_of_nodes++)
	{
		/*checks if malloced str is NULL*/
		if (head->str == NULL)
		{
			printf("[0](nil)\n");
			head = head->next;
			num_of_nodes++;
		}
		printf("[%d] %s\n", head->len, head->str);
		/*point to the next node*/
		head = head->next;
	}
	return (num_of_nodes);
}
