#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list head
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int n;
	const list_t *c_node = h;

	if (!h)
	{
		return (0);
	}
	for (n = 0; c_node; n++)
	{
		c_node = c_node->next;
	}
	return (n);
}
