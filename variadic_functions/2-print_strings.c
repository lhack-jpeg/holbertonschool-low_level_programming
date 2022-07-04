#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - prints new strings followed by new line
 * @separator: separator between strings
 * @n: count of args
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int count;
	char *sep = "", *temp_word;

	if (separator != NULL)
	{
		sep = strdup(separator);
	}
	va_start(ptr, n);
	count = 0;
	while (count < n)
	{
		temp_word = va_arg(ptr, char *);
		if (temp_word)
		{
			printf("%s", temp_word);
		}
		else
		{
			printf("(nil)");
		}
		if (count < n - 1)
			printf("%s", sep);
		count++;
	}
	printf("\n");
	va_end(ptr);
}
