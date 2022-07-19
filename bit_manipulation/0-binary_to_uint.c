#include "main.h"

/**
 * binary_to_uint - convert string of 0 & 1 to unsigned int
 * @b: pointer to string
 * Return: 0 if b is NULL or contains char that is greater than 1 else return
 * int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;

	while (b[len])
	{

		if (b[len] >= '2')
			return (0);

		if (b[len] == '1')
		{
			num += 1 * mult;
			mult *= 2;
		}

		if (b[len] == '0')
		{
			mult *= 2;
		}
		len--;
	}

	return (num);
}
