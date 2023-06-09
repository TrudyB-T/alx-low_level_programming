#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: parameter
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nunode = malloc(sizeof(listint_t));

	if (nunode == NULL)
	{
		return (NULL);
	}

	nunode->n = n;
	nunode->next = *head;
	*head = nunode;

	return (*head);
}
