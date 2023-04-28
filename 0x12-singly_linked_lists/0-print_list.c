#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nod_n;
	char *str = h->str;
	unsigned int len = h->len;
	const list_t *c_node = h;


	for (nod_n = 0; c_node != NULL; nod_n++)
	{
		str = c_node->str;
		if (str == NULL)
		{
			printf("[0] (nil)\n");
			c_node = c_node->next;
			continue;
		}
		len = c_node->len;
		printf("[%u] %s\n", len, str);
		c_node = c_node->next;
	}
	return (nod_n);
}
