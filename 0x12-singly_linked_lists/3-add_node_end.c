#include "lists.h"
#include <string.h>

/**
 * get_len - returns length of string.
 * Return: length of string.
 * @str: string;
 */

int get_len(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + get_len(str + 1));
	}
}


/**
  *add_node_end - adds a new node at the end of a list_t.
  *@head: pointer to head element.
  *@str: string to be duplicated
  *
  *Return: address of the new element.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = get_len(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	/*traverse the linked list until the last node is reached*/
	else
	{
		for (end_node = *head; end_node->next != NULL;
				end_node = end_node->next)
		{}
		end_node->next = new_node;
	}

	return (new_node);
}
