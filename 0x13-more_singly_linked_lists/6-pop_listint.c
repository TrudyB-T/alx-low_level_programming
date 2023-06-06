#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *q;
	int val;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	val = (*head)->n;
	q = (*head)->next;
	free(*head);
	*head = q;

	return (val);
}
