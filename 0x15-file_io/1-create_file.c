#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int g = 0;
	int h = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (!text_content)
	{
		for (; text_content[i];)
			i++;
	}

	g = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	h = write(g, text_content, i);

	if (g == -1 || h == -1)
	{
		return (-1);
	}

	close(g);

	return (1);
}
