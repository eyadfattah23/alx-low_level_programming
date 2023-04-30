#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: list head
 * @n: value to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c_node = *head;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	if (!c_node)
		*head = n_node;

	else
	{
		for (; c_node->next; c_node = c_node->next)
		;
		c_node->next = n_node;
	}
	return (n_node);
}
