#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	char *separ8r;
	unsigned long int j;

	if (ht == NULL)
		return;

	printf("{");
	separ8r = "";

	for (j = 0; j < ht->size; j++)
	{
		temp = ht->array[j];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", separ8r, temp->key, temp->value);
			separ8r = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
