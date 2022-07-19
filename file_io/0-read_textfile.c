#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to file name
 * @letters: buffer size of letters
 * Return: actual numbers of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filedes, filewrite, fileread;
	char *stored;

	if (filename == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);

	stored = malloc(sizeof(*stored) * letters);
	if (stored == NULL)
		return (0);

	fileread = read(filedes, stored, letters);
	if (fileread == -1)
	{
		free(stored);
		return (0);
	}

	filewrite = write(STDOUT_FILENO, stored, fileread);
	if (filewrite == -1)
		return (0);

	free(stored);
	close(filedes);
	return (fileread);
}
