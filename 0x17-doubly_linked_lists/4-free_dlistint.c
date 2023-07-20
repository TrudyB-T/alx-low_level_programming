#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: double pointer to the head of dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
