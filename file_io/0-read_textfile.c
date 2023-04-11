#include <stdlib.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile -  reads a text file and prints to the POSIX standard output
 * @filename: const char *
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, or 0
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_bytes, ret_value;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	else
	{
		buffer = malloc(sizeof(*buffer) * letters);
		if (buffer == NULL)
		{
			return (0);
		}
		num_bytes = read(fd, buffer, letters);
		if (num_bytes == -1)
		{
			return (0);
		}
		ret_value = write(STDOUT_FILENO, buffer, num_bytes);
		if (ret_value == -1 || ret_value != num_bytes)
		{
			return (0);
		}
		free(buffer);
		close(fd);
		return (ret_value);
	}
}
