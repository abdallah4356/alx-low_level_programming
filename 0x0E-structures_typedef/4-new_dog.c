#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of string
 *
 * @str: the string ptr
 *
 * Return: the length
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcpy - copies a string
 *
 * @src: the string to be copied
 * @dest: the destination
 *
 * Return: @dest
*/

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z]; z++)
		dest[z] = src[z];
	dest[z] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 *
 * @name: name of it
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: 0 Always success
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	(*dog).name = _strcpy(dog->name, name);
	(*dog).age = age;
	(*dog).owner = _strcpy(dog->owner, owner);

	return (dog);
}
