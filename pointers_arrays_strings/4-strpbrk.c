#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - return the firest location of occurence in the string
 *
 * @s: the string to be searched
 * @accept: the chars to be searched
 *
 *Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	/*Loop over until string reaches null*/
	while (*s != '\0')
	{
		/*printf("%c is the ch of s\n", *s);*/
		/*printf("%p is the address of s\n", s);*/
		i = 0;
		while (accept[i] != '\0')
		{
			/*printf("%c is the char of accept\n", accept[i]);*/
			/*printf("%p is the address of accept\n", &accept[i]);*/
			/*If char match add one to counter*/
			if (*s == accept[i])
				return (s);
			i++;
		}
		/*Checks to see if segment add any to count*/
		s++;
	}
	return (NULL);
}
