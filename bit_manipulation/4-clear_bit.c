#include "main.h"
/**
 * clear_bit - set the value of a bit at index to 0
 * @n: pointer to a number
 * @index: index of bit
 *Return: 1 if success, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_size;
	/* this creates a bin with 1 at the given index */
	unsigned long int mask = 1 << index;

	max_size = (sizeof(unsigned long int) * 16);

	if (n == NULL)
		return (-1);
	if (index > max_size)
		return (-1);

	/**
	 * this updates what is contained in index
	 * with the | operator
	 */
	*n = *n & ~mask;

	return (1);
}
