#include "search_algos.h"

/**
 * jump_search - search a sorted array using the jump search method
 * @array: pointer to first element of the array
 * @size: size of the array
 * @value: to search for in array
 *Return: index of value, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, idx, j;

	if (array == NULL)
		return (-1);

	step = sqrt(size);

	idx = 0;
	while (idx < size)
	{
		if (array[idx] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       idx - step, idx);
			for (j = idx - step; j <= idx || j < size; j++)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       j, array[j]);
				if (value == array[j])
					return (j);
			}
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (idx + step >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       idx, idx + step);
			for (j = idx; j < size; j++)
			{
				printf("Value checked array[%ld] = [%d]\n",
				       j, array[j]);
				if (value == array[j])
					return (j);
			}
			return (-1);
		}
		idx += step;
	}
	return (-1);
}
