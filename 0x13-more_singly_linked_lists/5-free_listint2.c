#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * sets the head to NULL
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *c_node = *head;

	if (head == NULL || *head == NULL)
	{
		return; /* nothing to do */
	}
	while (c_node)
	{
		*head = (*head)->next;
		free(c_node);
		c_node = *head;
	}
	*head = NULL;
}
