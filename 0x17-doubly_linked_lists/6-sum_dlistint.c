#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: head of the list
 * Return:  sum of all the data (n), if list is empty, return 0
 */
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
