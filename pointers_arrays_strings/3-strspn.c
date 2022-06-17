#include <stdio.h>
#include "main.h"
/**
 * _strspn - return the numbers in the inital segment of s which only
 * of bytes from accept
 * @s: the string to be compared
 * @accept: the chars to be compared against the string
 *
 *Return: unsigned int value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, temp_count = 0;
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
				temp_count++;
			i++;
		}
		/*Checks to see if segment add any to count*/
		if (count < temp_count)
			count = temp_count;
		else
			break;
		s++;
	}
	return (count);
}
