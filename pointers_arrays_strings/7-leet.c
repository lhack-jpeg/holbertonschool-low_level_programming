#include <stdio.h>
/**
 * leet - encodes string into 1337
 * @ch: character being encoded
 *Return: char
 */

char *leet(char *ch)
{
	int i, j;
	char leet[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	i = 0;
	while (ch[i] != '\0')
	{
		j = 0;
		while (j < 6)
		{
			if (ch[i] == lower[j] || ch[i] == upper[j])
				ch[i] = leet[j];
			j++;
		}
		i++;
	}

	return (ch);
}
