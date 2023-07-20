#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;
	const dlistint_t *j;

	if (h != NULL)
	{
		for (j = h; j != NULL; j = j->next)
		{
			k++;
		}
	}

	return (k);
}
