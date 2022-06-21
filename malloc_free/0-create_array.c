#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of char and initailises it
 * with the specified char
 * @size: size of array
 * @c: first char of the array
 *Return: char pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
