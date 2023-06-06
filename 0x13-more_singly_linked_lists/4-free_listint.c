#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint -  prints all the elements of a listint_t list.
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint *q;

	while (head != NULL)
	{
		q = head->next;
		free(head);

		head = q;
	}
}
