#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count] != '\0')
		{
			count = count + 1;
		}
		bytes = write(fd, text_content, count);
		if (bytes == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
