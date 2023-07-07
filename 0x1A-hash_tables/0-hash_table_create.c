#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!table)
		return (NULL);

	table->size	= size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	if (!(table->array))
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
