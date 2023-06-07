#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *q = NULL;
	listint_t *r = NULL;

	while (*head != NULL)
	{
		r = (*head)->r;
		(*head)->r = q;
		q = *head;
		*head = r;
	}
	*head = q;

	return (head);
}
