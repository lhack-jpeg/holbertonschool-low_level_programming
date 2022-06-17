#include <stdio.h>
/**
 * _strstr - check to find the first occurence of the substring
 * in the main string
 * @haystack: The string being searched
 * @needle: the substring to be used for the search
 *Return: returns the pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
