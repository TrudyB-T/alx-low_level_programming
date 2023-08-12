#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table.
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp.a;
	hash_node_t *temp.b;
	unsigned long int j = 0;

	if (ht == NULL)
		return;

	for (; j < ht->size; j++)
	{
		temp.a = ht->array[j];
		while ((temp.b = temp.a) != NULL) {
			temp.a = temp.a->next;
			free(temp.b->key);
			free(temp.b->value);
			free(temp.b);
		}
	}
	free(ht->array);
	free(ht);
}
