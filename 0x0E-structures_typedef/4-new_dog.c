#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns length of the string
 *
 * @s : the string to get the length of
 *
 * Return: length of a string
 */

int _strlen(char *s)

{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}



/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 *
 * @src : source value
 * @dest : destination value
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}


/**
 * *new_dog - creates a new dog
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int k = _strlen(name);
	int f = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (k + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (f + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
