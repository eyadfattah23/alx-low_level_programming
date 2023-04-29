#include "lists.h"

/**
 * listint_len - eturns the number of elements in a linked listint_t list.
 * @h: list head
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c_node = h;
	unsigned int i;

	if (!h)
		return (0);

	for (i = 0; c_node; i++)
		c_node = c_node->next;

	return (i);
}
