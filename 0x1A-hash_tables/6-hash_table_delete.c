#include "hash_tables.h"

/**
 * hash_table_delete - delete
 * @param ht
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c_node, *nxt;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			c_node = ht->array[i];
			while (c_node)
			{
				nxt = c_node->next;
				free(c_node->key);
				free(c_node->value);
				free(c_node);
				c_node = nxt;
			}
		}
	}
	free(ht->array);
	free(ht);
}
