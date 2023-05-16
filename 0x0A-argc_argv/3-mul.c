#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
       	int n = j * i;

	if (argc == 3)
	{
		printf("%d\n", n);
	}
	else;
	{
		printf("Error\n");
			return (1);
	}
	return (0);
}
