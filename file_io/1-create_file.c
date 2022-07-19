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
 * _strcpy - copy the string from src and change the pointer for dest
 * @dest: dest pointer
 * @src: src pointer
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*Copy while check for null operator*/
	while (src[i] != '\0')
	{
		/*Assign the value of each index*/
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return (dest);
}

/**
 * create_file - create a file and copy text to file
 * @filename: pointer to file name
 * @text_content: pointer to text to copy
 * Return: 1 on success, -1 on error
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, filewrite, len;
	char *str;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = _strlen(text_content);
	str = malloc(sizeof(*str) * len + 1);
	str = _strcpy(str, text_content);
	filewrite = write(filedes, str, len);
	if (filewrite == -1)
		return (-1);

	close(filedes);
	return (1);
}
