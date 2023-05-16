#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string 
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

