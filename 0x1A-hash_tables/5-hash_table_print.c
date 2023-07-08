#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c_node;
	int count = 0;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				c_node = ht->array[i];
				while (c_node)
				{
					if (count > 0)
						printf(", ");
					printf("'%s': '%s'", c_node->key, c_node->value);
					count++;
					c_node = c_node->next;
				}
			}
		}
	}
	printf("}\n");
}
