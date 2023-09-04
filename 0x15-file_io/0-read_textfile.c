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
	size_t bytes_read;
	FILE *fp;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, fp);

	fclose(fp);

	printf("%s", buffer);
	free(buffer);

	return (bytes_read);

}
