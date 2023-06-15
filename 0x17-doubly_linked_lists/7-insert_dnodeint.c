#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @idx: index of the new node
 * @n: data in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *c_node = *h;
	unsigned int i;

	if (!h)
		return NULL;
	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		*h = n_node;
		n_node->next = c_node;
		n_node->prev = NULL;
		return (n_node);
	}
	for (i = 0; c_node; i++, c_node = c_node->next)
	{
		if (i == idx - 1)
		{
			n_node->next = c_node->next;
			n_node->prev = c_node;
			c_node->next = n_node;
			if (n_node->next)
				n_node->next->prev = n_node;
			return (n_node);
		}
	}
	free(n_node);
	return (NULL);
}
