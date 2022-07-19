#include "main.h"
/**
 * get_bit - reutrn the value of a bit at a given index
 * @n: the binary representaiton of a number
 * @index: index of bit
 *Return: value of the bit at index, -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_size;
	int value;

	max_size = (sizeof(unsigned long int) * 16);

	if (index > max_size)
		return (-1);

	value = ((n >> index) & 1);

	return (value);
}
