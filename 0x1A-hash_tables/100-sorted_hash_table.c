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
	stable->array = (shash_node_t **)calloc(stable->size, sizeof(shash_node_t *));
	if (!stable->array)
	{
		free(stable);
		return (NULL);
	}
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
void free_shash_node(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * insert_shash_node - insert a shash_node at the right place
 * in the sorted linked list
 * @ht: the hash table
 * @new: the new node to be inserted
 * Return: postion of the new node
 */
void insert_shash_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *cnode = ht->shead;

	if (!cnode && !ht->stail)
	{
		ht->shead = new;
		ht->stail = new;
		new->snext = NULL;
		new->sprev = NULL;
		return;
	}
	if (strcmp(new->key, cnode->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		new->sprev = NULL;
		ht->shead = new;
		return;
	}
	for (; cnode; cnode = cnode->snext)
	{
		if (strcmp(new->key, cnode->key) <= 0)
		{
			new->snext = cnode;
			cnode->sprev->snext = new;
			new->sprev = cnode->sprev;
			cnode->sprev = new;
			return;
		}
	}
	ht->stail->snext = new;
	new->sprev = ht->stail;
	ht->stail = new;
	ht->stail->snext = NULL;
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
	shash_node_t *new, *current;

	if (!ht || !key || key[0] == '\0' || !value)
		return (0);
	new = shash_node_create(key, value);
	if (!new)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0) /*Scenario 1: Update the value.*/
		{
			free(current->value);
			current->value = strdup(value);
			free_shash_node(new);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	} /*Scenario 2: Handle the collision. || key doesn't exist*/
	new->next = ht->array[index];
	ht->array[index] = new;
	insert_shash_node(ht, new);
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key from a hash table
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *node;

	if (!ht || !key || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (!node)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print the hash table using the sorted linked list
 * @ht: hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *cnode;

	if (ht)
	{
		printf("{");
		cnode = ht->shead;
		while (cnode)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", cnode->key, cnode->value);
			count++;
			cnode = cnode->snext;
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - print the hash table's key/value in reverse order
 * using the sorted linked list
 * @ht: hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *cnode;

	if (ht)
	{
		printf("{");
		cnode = ht->stail;
		while (cnode)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", cnode->key, cnode->value);
			count++;
			cnode = cnode->sprev;
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - delete a hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *c_node, *nxt;

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
