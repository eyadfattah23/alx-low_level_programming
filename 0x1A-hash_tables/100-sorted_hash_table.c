#include "hash_tables.h"

/**
 * shash_table_create - creates a php(sorted) hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * If something went wrong, return NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *stable = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (!stable)
		return (NULL);

	stable->size = size;
	stable->array = (shash_node_t **) calloc(stable->size, sizeof(shash_node_t));
	if (!stable->array)
		return (NULL);
	stable->shead = NULL;
	stable->stail = NULL;
	for (i = 0; i < stable->size; i++)
		stable->array[i] = NULL;
	return (stable);
}
