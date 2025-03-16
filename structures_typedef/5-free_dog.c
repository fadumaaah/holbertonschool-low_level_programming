#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Free memory from dog structure
 *
 * @d: pointer to dog structure to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
