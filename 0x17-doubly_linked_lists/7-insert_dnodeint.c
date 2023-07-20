#include "lists.h"
/**
 * insert_dnodeint_at_index - returns the nth node of list.
 * @h: double pointer to the head of dlistint_t list
 * @idx: the index of the list where the new node should be added
 * @n: data to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node = NULL, *current = *h;
	unsigned int j = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while (current != NULL)
	{
		if (j == idx)
		{
			new_node->prev = prev_node;
			new_node->next = current;
			if (current != NULL)
				current->prev = new_node;
			if (prev_node != NULL)
				prev_node->next = new_node;
			else
			{
				*h = new_node;
			}
			return (new_node);
		}
		prev_node = current;
		current = current->next;
		j++;
	}
	if (idx == j)
	{
		return (add_dnodeint_end(h, n));
	}
	free(new_node);
	return (NULL);
}
