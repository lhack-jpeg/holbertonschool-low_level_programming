#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers with min and max
 * @min: min value of int
 * @max: max value of the array
 *Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
