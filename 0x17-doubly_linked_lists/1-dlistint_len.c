#include "lists.h"
/**
 * dlistint_len - counts all the elements of a dlistint_t list.
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *c_node = h;

	if (!h)
		return (0);

	for (i = 0; c_node; i++, c_node = c_node->next);
	return (i);
}
