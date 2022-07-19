#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: pointer to the string
 *Return: returns the string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * append_text_to_file - append text to a file.
 * @filename: pointer to filename
 * @text_content: pointer to string to append onto file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedes, filewrite, len;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_RDWR | O_APPEND);
	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}

	len = _strlen(text_content);
	filewrite = write(filedes, text_content, len);
	if (filewrite == -1)
		return (-1);

	close(filedes);
	return (1);
}
