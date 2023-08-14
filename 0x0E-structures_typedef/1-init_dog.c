#include "dog.h"

/**
 * init_dog - initialize data to struct dog
 * @d: initializer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: is void
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
