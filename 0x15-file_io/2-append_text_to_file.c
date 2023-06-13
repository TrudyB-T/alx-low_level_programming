#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int g = 0;
	int h = 0;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (; text_content[i];)
			i++;
	}

	g = open(filename, O_WRONLY | O_APPEND);

	h = write(g, text_content, i);

	if (g == -1 || h == -1)
		return (-1);

	close(g);

	return (1);
}
