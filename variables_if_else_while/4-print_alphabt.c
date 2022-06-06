#include <stdio.h>
/**
 *main - Function to print out letters in order while skipping q and e
 *
 *Return: Always returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch =='q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
