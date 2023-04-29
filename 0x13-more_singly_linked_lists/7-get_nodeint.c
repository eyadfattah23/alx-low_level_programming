#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: list head
 * @index: the index of the node
 * Return: nth node of a listint_t linked list.
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *n_node = head;

	if (!head)
		return (NULL);
	for (i = 0; (i < index) && (n_node); i++)
	{
		n_node = n_node->next;
	}
	return(n_node);
}
