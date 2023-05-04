#include "lists.h"

/**
  * pop_listint - a function that deleets the head node of a listint_t
  * Return: returns the head node’s data (n).0 if list is empty
  * @head: pointer to pointer head node which point to first node.
  */

int pop_listint(listint_t **head)
{
	listint_t *node_holder;
	int deleted = 0;

	if (*head == NULL)
	{
		return (deleted);
	}

	node_holder = *head;
	deleted = node_holder->n;

	/*make head point to the next element*/
	*head = (*head)->next;
	free(node_holder);
	return (deleted);
}
