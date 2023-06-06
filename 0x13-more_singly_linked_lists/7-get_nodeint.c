#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: parameter
 * Return: NULL if linked list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *q = head;

	while (q && n < index)
	{
		q = q->next;
		n++;
	}

	if (q != NULL)
	{
		return (q);
	}
	else
	{
		return (NULL);
	}
}
