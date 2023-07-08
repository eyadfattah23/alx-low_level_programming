#include "hash_tables.h"
/**
 * hash_node_create - create a new node (key:value item)
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 *		value must be duplicated.
 *		value can be an empty string
 * Return: address of the new node
 */
hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *n_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!n_node)
		return (NULL);

	n_node->key = strdup(key);
	if (!(n_node->key))
	{
		free(n_node);
		return (NULL);
	}
	n_node->value = strdup(value);

	if (!(n_node->value))
	{
		free(n_node->key);
		free(n_node);
		return (NULL);
	}
	n_node->next = NULL;
	return (n_node);
}

/**
 * free_hash_node - free a hash node
 * @node: node to be freed
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: he value associated with the key.
 * value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = hash_node_create(key, value), *current;

	if (!ht || !key || key[0] == '\0' || !value)
	{
		free_hash_node(new);
		return (0);
	}
	if (!new)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (!current) /*Key does not exist.*/
	{
		ht->array[index] = new;
		return (1);
	}
	else
	{
		while (current)
		{
			if (strcmp(current->key, key) == 0) /*Scenario 1: Update the value.*/
			{
				current->value = strdup(value);
				free_hash_node(new);
				if (!current->value)
					return (0);
				return (1);
			}
			current = current->next;
		}	/*Scenario 2: Handle the collision.*/
			ht->array[index] = new;
			new->next = ht->array[index];
			return (1);
	}
	free_hash_node(new);
	return (0);
}
