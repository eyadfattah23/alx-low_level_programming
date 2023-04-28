#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list head
 * @str: str to put at the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *c_node = *head;
	unsigned int l;

	if (!n_node)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
		;

	n_node->len = l;
	n_node->str = strdup(str);
	if (!n_node->str)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = NULL;

	if (!c_node)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next)
			c_node = c_node->next;

		c_node->next = n_node;
	}
	return (n_node);
}
