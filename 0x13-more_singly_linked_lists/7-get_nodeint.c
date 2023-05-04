#include "lists.h"

/**
  * get_nodeint_at_index - a function that returns nth node
  * of a listint_t linked list.
  * Return: returns the nth node, NULL if not found.
  * @head: pointer to first node of list.
  * @index: index of node.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;

	/* count is Initialized to the length of the list */
	count = listint_len(head);

	if (current == NULL)
	{
		count++;
	}
	if (count <= index)
	{
		return (NULL);
	}
	else
	{
		/*Traverse the list until the index is reached*/
		for (count = 0; current != NULL; count++)
		{
			if (count == index)
			{
				break;
			}
			else
			{
				current = current->next;
			}
		}
		return (current);
	}
}

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * Return: returns the number of elements in a linked listint_t list
 * @head: pointer to the first node
 */

size_t listint_len(const listint_t *head)
{
	size_t num_of_ele;

	for (num_of_ele = 0; head != NULL; num_of_ele++)
	{
		head = head->next;
	}

	return (num_of_ele);
}
