#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * free_list -  frees a list_t list
 * @head: pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
list_t *q;

	while (head != NULL)
	{
		q = head->next;
		free(head->str);
		free(head);
		head = q;
	}
}
