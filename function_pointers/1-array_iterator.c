#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function to execute a function on each given element
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 *Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (action)
	{
		index = 0;
		while (index < size)
		{
			action(array[index]);
			index++;
		}
	}
}
