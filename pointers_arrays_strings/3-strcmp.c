#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int value = 0, i = 0;

	/*Continue loop while each char is the same value*/
	while (*(s1 + i) == *(s2 + i))
	{
		/*Break the loop if char is null*/
		if (*(s1 + i) == '\0')
			break;
		if (*(s2+ i) == '\0')
			break;
		i++;
	}

	value = *(s1 + i) - *(s2 + i);

	return (value);
}
