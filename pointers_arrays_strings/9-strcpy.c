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
	strcpy(dest, src);

	return (dest);
}
