#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node needed to be returned
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c_node = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; c_node; i++, c_node = c_node->next)
	{
		if (i == index)
			return (c_node);
	}
	return (NULL);
}
