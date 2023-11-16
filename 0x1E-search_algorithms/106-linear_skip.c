#include "search_algos.h"

/**
 * linear_skip -  searches for a value in a sorted skip list of integers.
 *
 * @list:  pointer to the head of the skip list to search in
 * @value: value to search for
 * Return:  pointer on the first node where value is located or NULL
 * if value is not present in list or if head is NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *b, *g;

	if (list == NULL)
		return (NULL);

	for (b = g = list; g->next != NULL && g->n < value;)
	{
		b = g;
		if (g->express != NULL)
		{
			g = g->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   g->index, g->n);
		}
		else
		{
			while (g->next != NULL)
				g = g->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   b->index, g->index);

	for (; b->index < g->index && b->n < value; b = b->next)
		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);
	printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);

	return (b->n == value ? b : NULL);
}
