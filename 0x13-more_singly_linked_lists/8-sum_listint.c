#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list.
 * @head: list head
 * Return: sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *c_node = head;

	if (!head)
		return (0);

	while (c_node)
	{
		sum += c_node->n;
		c_node = c_node->next;
	}
	return (sum);
}
