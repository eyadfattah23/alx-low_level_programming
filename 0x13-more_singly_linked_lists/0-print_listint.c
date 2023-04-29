#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c_node = h;
	unsigned int i;

	if (!h)
		return (0);

	for (i = 0; c_node; i++)
	{
		printf("%d\n", c_node->n);
		c_node = c_node->next;
	}
	return (i);
}
