#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free the struct1
 * @d: pointer to the struct
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		/*free(d->age);*/
		free(d->owner);
		free(d);
	}
}
