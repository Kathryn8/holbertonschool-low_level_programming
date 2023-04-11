#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC,  S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
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
}
