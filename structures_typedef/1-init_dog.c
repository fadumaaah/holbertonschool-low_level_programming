#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initalise variable of dogs age, owner and name
 *
 * @name: Pointer that holds dog's name
 * @owner: Pointer that holds dog's owner
 * @age: Value in years of dog's age
 * @d: pointer to structure dog`
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
