#include "dog.h"

/**
 * init_dog - initialize a variable type
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
