#include "main.h"
#include <sys/stat.h>
#define BYTES 1024

/**
 * main - entry point to program that can copy files
 * @argc: number of arguments
 * @argv: array of pointers to strings that are user input
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BYTES];
	int to_exists = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open_from(argv[1], O_RDONLY, argv[1]);
	if (access(argv[2], F_OK) == 0)
	{
		to_exists = 1;
	}
	fd_to = open_to(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664, argv[2]);

	r = xread(fd_from, buffer, BYTES, argv[1]);
	while (r != 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = xread(fd_from, buffer, BYTES, argv[1]);
	}
	if (chmod(argv[2], 0664) == -1 && to_exists == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	xclose(fd_from);
	xclose(fd_to);
	return (0);
}

/**
 * open_from - slightly modified version of open
 * @pathname: string of the pathname
 * @flags: integer
 * @filename: string of the filename
 *
 * Return: file descriptor if successful, exit program on error.
 */

int open_from(const char *pathname, int flags, char *filename)
{
	int fd_from;

	fd_from = open(pathname, flags);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd_from);
}

/**
 * open_to - slightly modified version of open
 * @pathname: string of the pathname
 * @flags: integer
 * @mode: integer
 * @filename: string of the filename
 *
 * Return: file descriptor if successful, exit program on error.
 */

int open_to(const char *pathname, int flags, int mode, char *filename)
{
	int fd_to;

	fd_to = open(pathname, flags, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd_to);
}

/**
 * xread - slightly modified version of read
 * @fd: file descriptor
 * @buf: buffer to be used
 * @count: number of bytes to be read
 * @filename: string of the filename
 *
 * Return: number of bytes read otherwise exit program on error.
 */

ssize_t xread(int fd, void *buf, size_t count, char *filename)
{
	int num_bytes;

	num_bytes = read(fd, buf, count);
	if (num_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (num_bytes);
}

/**
 * xclose - slightly modified version of close
 * @fd: file descriptor
 *
 * Return: ) on success otherwise exit program on error.
 */

int xclose(int fd)
{
	int x;

	x = close(fd);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
}
