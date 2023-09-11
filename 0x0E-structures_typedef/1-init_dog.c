#include "dog.h"

/**
 * init_dog - adds info to the struct
 *
 * @d: the dog itself
 * @name: name of the dog
 * @age: the dog's age
 * @owner: his owner's name
 *
 * Return: the full struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
