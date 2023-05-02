#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key to look for in the hash table
 * Return: the value associated with the key, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/* Check if the hash table or key is invalid */
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	/* Calculate the index in the hash table array */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index to find the key */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* Check if the current node's key matches the given key */
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		/* Move to the next node in the linked list */
		temp = temp->next;
	}

	return (NULL);
}
