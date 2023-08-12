#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nu_node = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;


	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}



	nu_node = malloc(sizeof(*nu_node));
	if (!nu_node)
		return (0);

	nu_node->key = strdup(key);
	nu_node->value = strdup(value);

	nu_node->next = ht->array[index];
	ht->array[index] = nu_node;

	return (1);
}
