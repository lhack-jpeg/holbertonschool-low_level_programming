#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copy the string from src for n elements and concatenate it onto
 * dest
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of elements from src to copy over
 *Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/*Iterates over each item in src string*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/*Adds a null character into the string if necessary*/
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
