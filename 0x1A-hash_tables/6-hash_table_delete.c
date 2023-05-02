#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes the entire hash table,
 * and all the nodes within it.
 * It iterates over each index in the hash table array, freeing all nodes
 * associated with that index. Then it frees the array and finally the
 * hash table itself.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int y;
	hash_node_t *delet;

	/* Check if the hash table exists and has elements */
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	/* Iterate over each index in the hash table array */
	for (y = 0; y < ht->size; y++)
	{
		/* Iterate over each node in the linked list at that index */
		while (ht->array[y] != NULL)
		{
			/* Free the node and move to the next one */
			delet = ht->array[y]->next;
			free(ht->array[y]->key);
			free(ht->array[y]->value);
			free(ht->array[y]);
			ht->array[y] = delet;
		}
	}

	/* Free the hash table array and set it to NULL */
	free(ht->array);
	ht->array = NULL;

	/* Set the size of the hash table to 0 and free the hash table itself */
	ht->size = 0;
	free(ht);
}
