#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head of the dlistint_t list
 * @n: number in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (!n_node || !head)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	if (tmp)
		tmp->prev = n_node;
	n_node->next = *head;
	*head = n_node;
	return (n_node);
}
