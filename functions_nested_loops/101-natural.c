#include <stdio.h>
/**
 *totalsum - 
 *
 *Return:
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
