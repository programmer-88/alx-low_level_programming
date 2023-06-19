#ifndef DOG_H
#define DOG_H

#include <stdio.h>


/**
 * struct dog - keeps dogs info
 * @name: name of dog
 * @age: dogs age
 * @owner: dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
