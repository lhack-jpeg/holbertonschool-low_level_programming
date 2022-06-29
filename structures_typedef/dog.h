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
/**
 * dog_t - Typdedef of struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /*_DOG_H_*/
