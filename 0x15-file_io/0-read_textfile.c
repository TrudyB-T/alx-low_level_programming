#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

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
	char *buf = malloc(sizeof(char) * letters);
	ssize_t fd;
	ssize_t z;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	z = read(fd, buf, letters);
	y = write(STDOUT_FILENO, buf, z);

	free(buf);
	close(fd);
	return (y);
}
