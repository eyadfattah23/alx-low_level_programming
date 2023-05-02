#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: list head
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p_node = NULL, *n_node;

	if (!head || !*head)
		return (NULL);

	for (; *head; *head = n_node)
	{
		n_node = (*head)->next;
		(*head)->next = p_node;
		p_node = *head;
	}
	return (p_node);
}
