#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c_node = head;
	int sum = 0;

	if (!head)
		return (0);

	for (; c_node; c_node = c_node->next)
		sum += c_node->n;

	return (sum);
}
