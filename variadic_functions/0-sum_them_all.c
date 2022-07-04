#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: count
 *Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, count;

	if (n == 0)
		return (0);
	va_start(ap, n);
	count = 0;
	while (count <  n)
	{
		sum += va_arg(ap, int);
		count++;
	}
	va_end(ap);
	return (sum);
}
