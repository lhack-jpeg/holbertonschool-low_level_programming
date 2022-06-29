#ifndef _DOGS_H_
#define _DOGS_H_

/**
 * struct dog - structure for dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*_DOG_H_*/
