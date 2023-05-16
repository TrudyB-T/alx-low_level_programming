#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
		return (0);
}
