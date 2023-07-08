#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int p;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (p = 0; p < ht->size; p++)
	{
		while (ht->array[p] != NULL)
		{
			next = ht->array[p]->next;
			free(ht->array[p]->key);
			free(ht->array[p]->value);
			free(ht->array[p]);
			ht->array[p] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
