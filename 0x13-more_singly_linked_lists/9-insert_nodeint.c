#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: list head
 * @idx: position to insert at
 * @n: data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *c_node;
	unsigned int i;

	if (!head)
		return (NULL);

	c_node = *head;

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;

	for (i = 0; (i < idx - 1) && (c_node); i++)
		c_node = c_node->next;

	if (i < idx - 1)
	{
		free(n_node);
		return (NULL);
	}

	if (c_node)
	{
		n_node->next = c_node->next;
		c_node->next = n_node;
	}
	else
	{
		*head = n_node;
		n_node->next = NULL;
	}
	return (n_node);

}
