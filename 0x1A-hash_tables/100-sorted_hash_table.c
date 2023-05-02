#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 * Return: pointer to the new table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtab;
	unsigned long int p;

	hashtab = malloc(sizeof(shash_table_t));
	if (hashtab == NULL)
		return (NULL);
	hashtab->size = size;
	hashtab->shead = NULL;
	hashtab->stail = NULL;
	hashtab->array = malloc(sizeof(shash_node_t) * size);
	if (hashtab->array == NULL)
	{
		free(hashtab);
		return (NULL);
	}
	for (p = 0; p < size; p++)
	{
		hashtab->array[p] = NULL;
	}
	return (hashtab);
}

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *hashnode;

	hashnode = malloc(sizeof(shash_node_t));
	if (hashnode == NULL)
		return (NULL);
	hashnode->key = strdup(key);
	if (hashnode->key == NULL)
	{
		free(hashnode);
		return (NULL);
	}
	hashnode->value = strdup(value);
	if (hashnode->value == NULL)
	{
		free(hashnode->key);
		free(hashnode);
		return (NULL);
	}
	hashnode->next = hashnode->snext = hashnode->sprev = NULL;
	return (hashnode);
}

/**
 * add_to_sorted_list - add a node to the sorted (by key's ASCII) linked list
 * @table: the sorted hash table
 * @node: the node to add
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tmp = table->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
