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
	stable->array = (shash_node_t **)calloc(stable->size, sizeof(shash_node_t));
	if (!stable->array)
		return (NULL);
	stable->shead = NULL;
	stable->stail = NULL;
	for (i = 0; i < stable->size; i++)
		stable->array[i] = NULL;
	return (stable);
}
/**
 * shash_node_create - create a new node (key:value item)
 * @key: the key. key can not be an empty string
 * @value: the value associated with the key.
 *		value must be duplicated.
 *		value can be an empty string
 * Return: address of the new node
 */
shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *n_node = (shash_node_t *)malloc(sizeof(shash_node_t));

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
	n_node->snext = NULL;
	n_node->sprev = NULL;
	return (n_node);
}
/**
 * free_shash_node - free a hash node
 * @node: node to be freed
 */
void free_shash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * sortList - sort a the php list
 *
 * @ht: the hash table
 */
void sortList(shash_table_t *ht)
{
	shash_node_t *cnode = ht->shead, *nxt;
	char *tmp;

	if (!cnode)
		return (NULL);

	for (; cnode->snext; cnode = cnode->snext)
	{
		for (nxt = cnode->snext; nxt; nxt = nxt->snext)
		{
			if (strcmp(cnode->key, nxt->key) >= 0)
			{
				tmp = strdup(cnode->key);
				cnode->key = nxt->key;
				nxt->key = tmp;
				free(tmp);
			}
		}
	}
}
/**
 * insert_shash_node - insert a shash_node at the right place
 * in the sorted linked list
 * @ht: the hash table
 * @new: the new node to be inserted
 * Return: postion of the new node
 */
shash_node_t *insert_shash_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *cnode = ht->shead;
	unsigned long int i;

	if (!cnode)
	{
		ht->shead = new;
		new->snext = NULL;
		new->sprev = NULL;
		return (cnode);
	}
	for (i = 0; cnode; i++, cnode = cnode->snext)
	{
		if (strcmp(new->key, cnode->key) > 0)
		{
			new->snext = cnode->snext;
			new->sprev = cnode->sprev;
			cnode->snext = new;
			if (new->snext)
				new->snext->sprev = new;
			else
				ht->stail = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}
/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: he value associated with the key.
 * value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *current, *tmp;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);
	new = shash_node_create(key, value);
	if (!new)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (!current) /*Key does not exist.*/
	{
		ht->array[index] = new;
		insert_shash_node(ht, new);
		return (1);
	}
	else
	{
		while (current)
		{
			if (strcmp(current->key, key) == 0) /*Scenario 1: Update the value.*/
			{
				free(current->value);
				current->value = strdup(value);
				sortList(ht);
				free_shash_node(new);
				if (!current->value)
					return (0);
				return (1);
			}
			current = current->next;
		} /*Scenario 2: Handle the collision.*/
		ht->array[index] = new;
		new->next = tmp;
		insert_shash_node(ht, new);
		return (1);
	}
	free_shash_node(new);
	return (0);
}
