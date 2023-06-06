#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *q;

	while (head != NULL)
	{
		q = head->next;
		free(*head);
		head = q;
	}

	*head = NULL;
}
