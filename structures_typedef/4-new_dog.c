#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 *@s: pointer to the string
 *Return: returns the string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - copy and all
 * @str: pointer to the string
 *Return: char pointer
 */

char *_strdup(char *str)
{
	char *dest;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: the pointer to the string name
 * @age: age float
 * @owner: pointer to string owner
 *Return: pointer to structure dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t) + 1);
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
