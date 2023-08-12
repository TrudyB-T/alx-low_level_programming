#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempa;
	hash_node_t *tempb;
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	for (; j < ht->size; j++)
	{
		tempa = ht->array[j];
		while ((tempb = tempa) != NULL)
		{
			tempa = tempa->next;
			free(tempb->key);
			free(tempb->value);
			free(tempb);
		}
	}
	free(ht->array);
	free(ht);
}
