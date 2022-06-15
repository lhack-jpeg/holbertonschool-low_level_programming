#include <stdio.h>
#include <string.h>
/**
 * _strncat - copy the string from src for n elements and concatenate it onto
 * dest
 * @dest: dest pointer
 * @src: src pointer
 * @n: number of elements from src to copy over
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len;

	len = strlen(dest);
	/*Copy while check for null operator*/
	while (src[i] != '\0' && i < n)
	{
		/*Assign the value of each index*/
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
