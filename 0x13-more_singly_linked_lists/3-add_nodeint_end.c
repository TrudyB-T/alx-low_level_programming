#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: parameter
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nunode = malloc(sizeof(listint_t));
	listint_t *q = *head;

	if (nunode == NULL)
	{
		return (NULL);
	}

	nunode->n = n;
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
