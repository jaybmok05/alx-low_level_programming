#include "lists.h"

/**
  * insert_nodeint_at_index - a function that inserts a
  * new node at a given position.
  * Return: address of the new node or NULL if it fails.
  * @head: pointer to the first node on list.
  * @idx: index where the new node should be inserted.
  * @n: integer to be inserted.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node_holder;
	unsigned int count;

	node_holder = *head;

	/*find the node before the insertion point*/
	for (count = 0; node_holder && count < idx - 1; count++)
	{
		node_holder = node_holder->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		/*checks if node is to be inserted at the beginning of the list*/
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		/*checks if node to be inserted at a non-zero index*/
		if (count + 1 == idx)
		{
			new_node->next = node_holder->next;
			node_holder->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
