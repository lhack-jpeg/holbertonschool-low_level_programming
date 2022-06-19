#include <stdio.h>
/**
 * _atoi - returns an int from a string
 * @s: the string being searched
 *Return: int
 */

int _atoi(char *s)
{
	int numcount = 0, i = 0, j, multiplier = 1, negative = 1;
	int number = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			numcount++;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	while (numcount > 1)
	{
		multiplier = multiplier * 10;
		numcount--;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == '-')
			negative = negative * -1;
		else if (s[j] >= '0' && s[j] <= '9')
		{
			number = number + (s[j] - 48) * multiplier * negative;
			multiplier = multiplier / 10;
		}
	}

	return (number);
}
