#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nunode = malloc(sizeof(list_t));
	unsigned int len = 0;
	list_t *q = *head;

	while (str[len])
		len++;

	if (nunode == NULL || str == NULL)
	{
		return (NULL);
	}

	nunode->str = strdup(str);
	nunode->len = len;
	nunode->next = NULL;

	if (*head == NULL)
	{
		*head = nunode;
		return (nunode);
	}

	while (q->next)
		q = q->next;
	q->next = nunode;
	return (nunode);
}
