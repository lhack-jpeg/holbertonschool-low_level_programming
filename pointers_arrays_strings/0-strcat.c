#include <stdio.h>
#include <string.h>
/**
 * _strcat - copy the string from src and concatenate it onto dest
 * @dest: dest pointer
 * @src: src pointer
 *Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len;

	if (dest == NULL)
		return (NULL);

	if (src == NULL || *src == '\0')
		return (dest);

	len = _strlen(dest);
	/*Copy while check for null operator*/
	while (src[i] != '\0')
	{
		/*Assign the value of each index*/
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
