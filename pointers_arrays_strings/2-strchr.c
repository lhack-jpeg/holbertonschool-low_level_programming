#include <stdio.h>
#include <stdlib.h>
/**
 * _strchr - returns a pointer the address of the char if found else null
 * @s: the address to the string
 * @c: the char we are searching for
 *Return: the address or the null char
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	/*Loop until null terminator*/
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			/*&s[i] sends back the remaining char from the address*/
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
		return(&s[i]);
	/*If char doesn't match any from array, return null term*/
	return (NULL);
}
