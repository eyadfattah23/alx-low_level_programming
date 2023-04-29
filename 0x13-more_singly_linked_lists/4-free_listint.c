#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: list heads
 */
void free_listint(listint_t *head)
{
	listint_t *c_node = head;

	while (c_node)
	{
		head = head->next;
		free(c_node);
		c_node = head;
	}
}
