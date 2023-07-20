#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;
	const dlistint_t *j;

	if (h != NULL)
	{
		for (j = h; j != NULL; j = j->next)
		{
			printf("%d\n", j->n);
			k++;
		}
	}

	return (k);
}
