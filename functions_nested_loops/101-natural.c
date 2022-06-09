#include <stdio.h>
/**
 *main - prints the value of the numbers form 0  to 1024 that are multiples of 3
 * or 5
 *Returns: 0
 */

int main(void)
{
	int i = 0;
	int total_value = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total_value = total_value + i;
		i++;
	}

	printf("%d\n", total_value);

	return (0);
}
