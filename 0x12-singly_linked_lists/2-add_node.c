#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *nunode = malloc(sizeof(list_t));
	unsigned int len = 0;

	while (str[len])
		len++;

	if (nunode == NULL || str == NULL)
	{
		return (NULL);
	}

	nunode->str = strdup(str);
	nunode->len = len;
	nunode->next = *head;
	*head = nunode;

	return (*head);
}
