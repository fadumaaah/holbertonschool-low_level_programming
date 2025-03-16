#include <stdio.h>
#include "dog.h"

/**
 * 
 *
 *
 *
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy;
	char *owner_cpy;
	int index;
	int n = 0; o = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	/*Calculate length of string*/
	
	while (name[n] != '\0')
	{
		n++;
	}

	while (owner[o] != '\0')
	{
		o++;
	}

	name_cpy = malloc(n + 1);
	if (name_cpy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_cpy = malloc (o + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(dog);
		return (NULL);
	}

	/*String copy*/

	int index;

	for (index = 0; index < o; index++)
		owner_cpy[index] = owner[index];
	owner_cpy[o] = '\0';


	for (index = 0; index < n; index++)
		name_cpy[index] = name[index];
	name_cpy[n] = '\0';

	/* Set new values*/

	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}
