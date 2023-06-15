#include "lists.h"

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
