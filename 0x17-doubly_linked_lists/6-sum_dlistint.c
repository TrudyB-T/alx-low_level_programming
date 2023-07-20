#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: pointer to the head of dlistint_t list
 *
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	for (; current != NULL; current = current->next)
	{
		total = total + current->n;
	}

	return (total);
}
