#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list head
 */
void free_list(list_t *head)
{
	list_t *d_node = head;

	if (!head)
		return;

	while (head)
	{
		head = head->next;
		free(d_node->str);
		free(d_node);
		d_node = head;
	}
}
