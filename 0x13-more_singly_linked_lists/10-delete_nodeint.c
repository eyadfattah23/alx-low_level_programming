#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: list head
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c_node, *d_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	c_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(c_node);
		return (1);
	}

	for (i = 0; (i < index - 1) && c_node; i++)
		c_node = c_node->next;

	if (!(c_node->next) || (i < index - 1) || !c_node)
	{
		return (-1);
	}

		d_node = c_node->next;
		c_node->next = d_node->next;
		free(d_node);
		return (1);
}
