#include "main.h"

/**
 * flip_bits - Returns the number of bits you need to flip to get
 * from int to another
 * @n: first int
 * @m: second int
 *Return: numnber of ints to use
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0;

	result = n ^ m;

	while (result > 0)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
