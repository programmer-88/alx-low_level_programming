#include "main.h"

/**
 * read_textfile - reads a text file and prints to
 * the posix stdout
 * @filename: file to read
 * @letters: number of letters printed
 * Return: 0 on error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, br, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}


	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);
	br = read(o, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || br == -1 || wr == -1 || wr != br)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);

}
