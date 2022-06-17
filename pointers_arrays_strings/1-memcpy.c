#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copy the string located at one memory address to another
 * @dest: dest string address
 * @src: source string address
 * @n: amount of bytes to be copied
 *Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
