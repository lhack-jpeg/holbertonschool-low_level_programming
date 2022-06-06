#include <stdio.h>
/**
 *main - Function to print out letters in order while skipping q and e
 *
 *Return: Always returns 0
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch < 'z' && !(ch == 'e' || ch == 'q'))
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
