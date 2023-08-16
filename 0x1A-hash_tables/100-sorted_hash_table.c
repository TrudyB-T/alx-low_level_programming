#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table.
 * @size: the size of the array
 *
 * Return: pointer to the newly created shash table or
 * NULL if something went wrong
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(*ht));

	if (ht)
	{
		ht->array = calloc(size, sizeof(*ht->array));
		if (ht->array)
		{
			ht->size = size;
			ht->shead = NULL;
			ht->stail = NULL;
			return (ht);
		}
		free(ht);
	}
	return (NULL);
}


/**
 * add_n_shash - add node at the beginning of a shash at a given index
 *
 * @h: pointer shash linked list head
 * @key: key
 * @value: value
 *
 * Return: node
 */

shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(shash_node_t));

	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;

	*h = temp;

	return (temp);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @ht: pointer to shash table
 * @new: new node
 */

void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tempa, *tempb;
	int r;

	tempa = tempb = ht->shead;

	while (tempa != NULL)
	{
		r = strcmp(new->key, tempa->key);
		if (r == 0)
		{
			return;
		}
		else if (r < 0)
		{
			new->sprev = tempa->sprev;

			if (tempa->sprev)
				tempa->sprev->snext = new;
			else
				ht->shead = new;

			tempa->sprev = new;
			new->snext = tempa;

			return;
		}
		tempb = tempa;
		tempa = tempa->snext;
	}

	new->sprev = tempb;
	new->snext = NULL;

	if (ht->shead)
		tempb->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}


/**
 * shash_table_set - set hash table
 * @ht: pointer
 * @key: key
 * @value: value
 *
 * Return: 1 on sucess
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int _index;
	shash_node_t *nu;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	_index = key_index((unsigned char *)key, ht->size);

	nu = add_n_shash(&(ht->array[_index]), key, value);

	if (nu == NULL)
		return (0);

	add_i_shash(ht, nu);

	return (1);
}



/**
 * shash_table_get - get shash table
 * @ht: pointer to shash table
 * @key: key
 *
 * Return: pointer to hash table
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int _index;
	shash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	_index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[_index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print -  print the hash table using the sorted linked list
 * @ht: pointer to hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *separ8;

	if (ht == NULL)
		return;

	printf("{");
	separ8 = "";

	temp = ht->shead;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", separ8, temp->key, temp->value);
		separ8 = ", ";
		temp = temp->snext;
	}

	printf("}\n");
}



/**
 * shash_table_print_rev -  print the hash tables key/value
 * pairs in reverse order using the sorted linked list
 *
 * @ht: pointer to shash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *separ8;

	if (ht == NULL)
		return;

	printf("{");
	separ8 = "";

	temp = ht->stail;

	while (temp != NULL)
	{
		printf("%s'%s': '%s'", separ8, temp->key, temp->value);
		separ8 = ", ";
		temp = temp->sprev;
	}

	printf("}\n");
}



/**
 * shash_table_delete -  deletes a shash table.
 * @ht: the hash table
 */


void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tempa;
	shash_node_t *tempb;
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
