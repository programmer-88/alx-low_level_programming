#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string of content to add
 * Return: 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_wr;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,  0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_wr = write(fd, text_content, strlen(text_content));

		if (bytes_wr == -1)
		{
			close(fd);
			return (-1);
		}

	}

	close(fd);
	return (-1);
}
