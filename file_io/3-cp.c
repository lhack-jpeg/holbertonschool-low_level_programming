#include "main.h"

/**
 * close_check - check to see if file closed correctly
 * @file: file des pass through
 * Return: void
 */

void close_check(int file)
{
	int value;

	value = close(file);
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * error_check - function that produces different exit codes
 * @err_code: err code passed through
 * @file_from: the file to be copied from
 * @file_to: file to copy to
 * @filename: filename that caused error
 * Return: void
 */
void error_check(int err_code, int file_from, int file_to, char *filename)
{
	if (err_code == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		close_check(file_from);
		close_check(file_to);
		exit(98);
	}

	if (err_code == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	if (err_code == 94)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			filename);
		exit(98);
	}
	if (err_code == 95)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - function to copy on file into another
 * @argc: number of args
 * @argv: arguments passed through
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *srcname, *destname, buff[1024];
	int file_from, file_to, file_read;
	int file_write;

	if (argc != 3)
	{
		Write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	srcname = argv[1];
	destname = argv[2];

	file_from = open(srcname, O_RDONLY);
	file_to = open(destname, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_from == -1)
		error_check(94, file_from, file_to, srcname);

	if (file_to == -1)
		error_check(95, file_from, file_to, destname);

	file_read = 1024;
	while (file_read >= 1024)
	{
		file_read = read(file_from, buff, 1024);
		if (file_read == -1)
			error_check(98, file_from, file_to, srcname);

		file_write = write(file_to, buff, file_read);
		if (file_write == -1)
			error_check(99, file_from, file_to, destname);
	}
	close_check(file_from);
	close_check(file_to);
	return (0);
}
