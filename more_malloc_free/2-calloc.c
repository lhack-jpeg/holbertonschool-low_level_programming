#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocatiuons memory for an of elements of size bytes
 * @nmemb: element
 * @size: size of array
 *Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *tempptr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	tempptr = ptr;
	while (i < size * nmemb)
	{
		tempptr[i] = 0;
		i++;
	}
	return (ptr);
}
