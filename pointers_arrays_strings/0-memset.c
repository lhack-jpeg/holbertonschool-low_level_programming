#include <stdio.h>
/**
 * _memset - functions fill memory with a constant byte
 * @s: the memory address
 * @b: the char to fill the memory
 * @n: the amount of memory bytes to fill
 *Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		s[i] = b;
		i++;
	}
	return(s);
}
