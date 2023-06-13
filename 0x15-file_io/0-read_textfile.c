#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 *  read_textfile - reads a text file and prints
 *  it to the POSIX standard output
 *  @letters: the number of letters it should read and print
 *  @filename: file to read
 *
 *  Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str = malloc(sizeof(char) * letters);
	ssize_t x = open(filename, O_RDONLY);
	ssize_t y = write(STDOUT_FILENO, str, z);
	ssize_t z = read(x, str, letters);

	if (str == -1)
	{
		return (0);
	}

	free(str);
	close(x);
	return (y);
}
