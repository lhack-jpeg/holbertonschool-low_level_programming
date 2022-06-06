#include <stdio.h>
/**
 *main - Function to print out letters in order then uppercase
 *
 *Return: Always returns 0
 */

int main(void)
{
	char ch;
	char upperCH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (upperCH = 'A'; upperCH <= 'Z'; upperCH++)
	{
		putchar(upperCH);
	}
	putchar('\n');
	return (0);
}
