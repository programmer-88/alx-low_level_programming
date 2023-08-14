#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dog structure data type
 * Return: is void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
		free(d->name);
		free(d);
		free(d->owner);

}
