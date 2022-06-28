#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - returns a pointer to a memory alloc
 * @b: the size of the pointer
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
