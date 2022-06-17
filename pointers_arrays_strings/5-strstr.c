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
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[0] && needle[j])
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
