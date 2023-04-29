#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: list head
 * Return: the head node’s data (n).
 *     if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = *head;

	if (!head || !(*head))
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
