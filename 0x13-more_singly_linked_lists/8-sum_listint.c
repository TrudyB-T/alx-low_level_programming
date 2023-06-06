#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer
 *
 * Return: 0 if linked list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *q = head;

	while (q != NULL)
	{
		sum += q->n;
		q = q->next;
	}

	return (sum);
}
