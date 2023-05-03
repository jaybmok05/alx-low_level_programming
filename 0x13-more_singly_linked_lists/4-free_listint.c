#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list.
  * @head: pointer to first node.
  */

void free_listint(listint_t *head)
{
	listint_t *node_holder;

	/*traverse the single linked list until NULL*/
	while (head != NULL)
	{
		node_holder = head;
		head = head->next;
		free(node_holder);
	}
}
