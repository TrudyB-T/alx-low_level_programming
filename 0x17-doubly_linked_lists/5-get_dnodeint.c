#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list.
 * @head: double pointer to the head of dlistint_t list
 * @index: the index of the node, starting from 0
 *
 * Return: NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int j = 0;

	for (; current != NULL; j++, current = current->next)
	{
		if (j == index)
		{
			return (current);
		}
	}
	return (NULL);
}
