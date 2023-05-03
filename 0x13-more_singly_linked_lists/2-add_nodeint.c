#include "lists.h"

/**
  * add_nodeint - a function that adds a new node
  * at the beginning of a listint_t list.
  * Return: address of new element or NULL if it fails.
  * @head: pointer to the first node.
  * @n: the first member of a node.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_ptr;

	node_ptr = malloc(sizeof(listint_t));
	/*check allocated space for new node*/
	if (node_ptr  == NULL)
	{
		return (NULL);
	}

	node_ptr ->n = n;
	/*will point to the first node via head*/
	node_ptr ->next = *head;

	/*head points to first node, now is node_ptr*/
	*head = node_ptr;

	return (*head);
}
