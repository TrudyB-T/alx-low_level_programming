#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer
 * @index: index of the list where the new node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *q = *head;
	listint_t *new = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(q);
		return (1);
	}

	while (v < index - 1)
	{
		if (q == NULL || q->next == NULL)
			return (-1);
		q = q->next;
		v++;
	}

	new = q->next;
	q->next = new->next;
	free(new);

	return (1);
}

