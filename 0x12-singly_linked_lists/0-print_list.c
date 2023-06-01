#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer
 *
 * Return: always 0
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%u] %s\n", h->len, h->str);
				h = h->next;
				num++;
	}
	return (num);
}
