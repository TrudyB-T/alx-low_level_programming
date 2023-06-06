#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: parameter
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nunode = malloc(sizeof(listint_t));
	listint_t *q = *head;
	unsigned int n = 0;

	if (new == NULL || head == NULL)
	{
		return (NULL);
	}

	nunode->next = *head;
	*head = nunode;
	return (nunode);

	if (idx == 0)
	{
		nunode->next = *head;
		*head = nunode;
		return (nunode);
	}

	for (; q && n < idx; n++;)
	{
		if (n == idx - 1)
		{
			nunode->next = q->next;
			q->next = nunode;
			return (nunode);
		}
		else
			q = q->next;
	}
	return (NULL);
}
