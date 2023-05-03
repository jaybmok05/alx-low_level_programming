#include "lists.h"

/**
  * free_listint2 - a function that frees a 
  * listint_t list and sets head to null.
  * @head: pointer to the first node of list.
  */

void free_listint2(listint_t **head)
{
	listint_t *node_holder;

	/*check if pointer points to a node*/
	if (head != NULL)
	{
		/*traverse the single linked list until NULL*/
		while (*head != NULL)
		{
			node_holder = *head;
			*head = node_holder->next;
			free(node_holder);
		}
	}
}

