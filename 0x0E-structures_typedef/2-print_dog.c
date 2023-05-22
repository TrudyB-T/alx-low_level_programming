#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  prints a struct dog
 * @d: variable
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: (nil\n)");
	}

	else
	{
		printf("Name:%s\n", (d->name));
		printf("Age:%f\n", (d->age));
		printf("Owner:%s\n", (d->owner));
	}

	if (d == NULL)
	{
		printf("")
	}
}
