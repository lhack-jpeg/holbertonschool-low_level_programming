#include "dog.h"
/**
 * init_dog - function to initalise a variable in dog struct
 * @d: pointer to struct dog var
 * @name: pointer to dog.name
 * @age: dog.age float
 * @owner: pointer to owner
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
