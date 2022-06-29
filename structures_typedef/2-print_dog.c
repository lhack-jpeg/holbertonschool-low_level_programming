#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the information from dog file
 * @d: pointer to a struct of dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit (1);
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: 0.0000n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
