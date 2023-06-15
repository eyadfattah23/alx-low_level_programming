#include "lists.h"
/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextn = head;

	if (!nextn)
		return;

	nextn = nextn->next;
	while (head)
	{
		free(head);
		head = nextn;
		if (nextn)
			nextn = nextn->next;
	}
}
