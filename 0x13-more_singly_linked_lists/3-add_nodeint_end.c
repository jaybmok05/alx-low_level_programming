#include "lists.h"

/**
 * add_nodeint_end - a function that adds a
 * new node at the end of a listint_t list.
 * Return: address of the new element or NULL if it fails.
 * @head: pointer to pointer of first node.
 * @n: first member of the node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_ptr, *newnode_holder;

	newnode_holder = malloc(sizeof(listint_t));
	if (newnode_holder == NULL)
	{
		return (NULL);
	}
	newnode_holder->n = n;
	/*makes new node link to nothing*/
	newnode_holder->next = NULL;

	if (*head == NULL)
	{
		*head = newnode_holder;
	}
	else
	{
		/*traversing the single linked list until NULL*/
		for (node_ptr = *head; node_ptr->next != NULL; node_ptr = node_ptr->next)
		{}
		node_ptr->next = newnode_holder;
	}
	return (newnode_holder);
}
