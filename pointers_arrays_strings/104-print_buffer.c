#include <stdio.h>
#include <ctype.h>
/**
 * printable - check if a char is printable char
 * @c: char being check
 * Return: 1 if true, 0 otherwise
 */
int printable(int c)
{
	if (isprint(c))
		return (c);

	return ('.');
}
/**
 * printhex - print the 2 place hex codes in lower case
 * @b: pointer to string
 * @count: line number
 * @size: size of the buffer for b
 * Return: void
 */
void printhex(char *b, int count, int size)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (size - i - count > 0)
		{
			printf("%02x", b[i + count]);
			if (i % 2 == 1)
				putchar(' ');
		}
		else
		{
			while (i < 10)
			{
				printf("  ");
				if (i % 2 == 1)
					putchar(' ');
				i++;
			}
		}
	}
}
/**
 * printchar -  function to print char
 * @b: string
 * @count: int for line count
 * @size: size of buffer
 * Return: void
 */
void printchar(char *b, int count, int size)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		if (size - i - count > 0)
		{
			ch = printable(b[i + count]);
			printf("%c", ch);
		}
		else
			break;
	}
}

/**
 * print_buffer - prints out the buffer and the string determined by
 * the bytes passed through
 * @b: the string passed through
 * @size: the amount of bytes passed through
 *Return: void
 */

void print_buffer(char *b, int size)
{
	int count = 0;

	while (count < size)
	{
		printf("000000%02x: ", count);
		printhex(b, count, size);
		printchar(b, count, size);
		putchar('\n');
		count += 10;
	}
}
