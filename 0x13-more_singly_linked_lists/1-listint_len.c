#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{

	size_t val = 0;

	while (h != NULL)
	{
		val++;
		h = h->next;
	}
	return (val);
}
