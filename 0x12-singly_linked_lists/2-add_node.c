#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * Return: address of new element
 * @head: the list containing the elements.
 * @str: string to add
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int new_len;
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*get len of new node str*/
	for (new_len = 0; new_node->str[new_len]; new_len++)
	{}
	/*\*head points to first node*/
	new_node->len = new_len;
	/*redirection head to point to new_node*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
