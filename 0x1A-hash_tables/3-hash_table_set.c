#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table to add/update the key/value pair.
 * @key: Key string to add to the hash table. Must not be empty.
 * @value: Value string associated with the key.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	/* Check for NULL pointers and empty key strings */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	/* Calculate the index of the key in the hash table */
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Set the key and value of the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	/* If the corresponding index in the hash table is empty, add the node as head */
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	/* If the corresponding index is not empty, add the node as the new head */
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
