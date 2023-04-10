#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: const char *
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, or 0
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *fh;
	int count;
	char ch;

	if (filename == NULL)
	{
		printf("NULL filename - error\n");
		return (0);
	}
	fh = fopen(filename, "r");

	if (fh != NULL)
	{
		count = 0;
		while (count < (int)letters && (ch = fgetc(fh)) != EOF)
		{
			putchar(ch);
			count = count + 1;
		}
		fclose(fh);
		return (count);
	}
	else
	{
		printf("Error opening file\n");
		return (0);
	}
}
