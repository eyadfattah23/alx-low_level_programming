#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of the dlistint_t list
 * @n: number in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (!n_node || !head)
		return (NULL);

	n_node->next = NULL;
	n_node->n = n;
	if (!tmp)
		*head = n_node;
	else
	{
		for (; tmp->next; tmp = tmp->next)
			;
		tmp->next = n_node;
	}
	n_node->prev = tmp;

	return (n_node);
}
