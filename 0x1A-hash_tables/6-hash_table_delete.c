#include "hash_tables.h"

/**
 *  free_linkedlist - free a linked list of hash_nodes
 *  @node: is the head of the linked list
 *  Return: Nothing
 */
void free_linkedlist(hash_node_t *node)
{
	if (node)
	{
		free_linkedlist(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c_node, *nxt;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		c_node = ht->array[i];
		free_linkedlist(c_node);
	}
	free(ht->array);
	free(ht);
}
