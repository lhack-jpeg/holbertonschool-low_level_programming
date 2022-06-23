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
	int i, right_pad_space;

	for (i = 0; i < 10; i += 2)
	{
		if (count + i >= size)
			break;

		printf("%02x%02x ", b[count + i], b[count + i + 1]);
	}
	right_pad_space = (10 - i) * 2 + ((10 - i) / 2);
	if (right_pad_space > 0)
	{
		printf("%*c", right_pad_space, ' ');
	}
}
/**
 * pointchar - function to print char
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
		if (count + i > size)
			break;

		ch = printable(b[i + count]);
		printf("%c", ch);
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

	if (size == 0)
		putchar('\n');
	else
	{
		while (count < size)
		{
			printf("000000%02x: ", count);
			printhex(b, count, size);
			printchar(b, count, size);
			putchar('\n');
			count += 10;
		}
	}
}
