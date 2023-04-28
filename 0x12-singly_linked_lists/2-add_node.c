#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to list head
 * @str: str to put at the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *tmp = *head;
	int l;

	if (!n_node)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
	;
	*head = n_node;
	n_node->next = tmp;
	n_node->len = l;
	n_node->str = strdup(str);
	if (!n_node->str)
	{
		free(n_node);
		return (NULL);
	}
	return (n_node);
}
