#include <stdio.h>
/**
 *main - Function to print out letters in order
 *
 *Return: Always returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
