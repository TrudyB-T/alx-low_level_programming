#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list.
 * @h: double pointer to the head of dlistint_t list
 * @idx: the index of the list where the new node should be added
 * @n: data to add
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *prev_node = NULL;
	dlistint_t *current = *h;
	unsigned int j = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}

	else
	{
		for (; j < idx && current != NULL; j++)
		{
			prev_node = current;
			current = current->next;
		}
		
		if (current != NULL || idx == 0)
		{
			new_node->prev = prev_node;
			new_node->next = current;
			
			if (current != NULL)
			{
				current->prev = new_node;
			}
			
			if (prev_node != NULL)
			{
				prev_node->next = new_node;
			}
			else
			{
				*h = new_node;
			}
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
