#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copy the string from src and change the pointer for dest
 * @dest: dest pointer
 * @src: src pointer
 *Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*Loop over each index in src*/
	while (src[i])
	{
		/*Assign the value of each index*/
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
