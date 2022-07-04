#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - prints numbers with a separator
 * @separator: pointer to separator
 * @n: number of args to be passed
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int count;
	char *sep = "";

	if (separator != NULL)
	{
		sep = strdup(separator);
	}

	va_start(ptr, n);
	count = 0;
	while (count < n)
	{
		printf("%d", va_arg(ptr, int));
		if (count < n - 1)
			printf("%s", sep);
		count++;
	}
	printf("\n");
	va_end(ptr);
}
