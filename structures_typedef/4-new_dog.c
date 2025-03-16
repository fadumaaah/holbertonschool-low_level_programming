#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _str_length - Calculate length of string
 *
 * @str: String length to calculate
 *
 * Return: Length of string
 */

int _str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * str_copy - copies string from source to destination
 *
 * @dest: copied string destination
 * @src: original string to copy
 *
 * Return: Pointer to dest
 */


char *str_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);

}

/**
 * new_dog - create new dog and allocate memory for name & owner
 *
 * @name: pointer to dogs name
 * @age: value of dogs age
 * @owner: pointer to dogs owner
 *
 * Return: pointer to new_dog structure or null if failure
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy;
	char *owner_cpy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	if (name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	name_cpy = malloc((_str_length(name)) + 1);
	if (name_cpy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_cpy = malloc((_str_length(owner)) + 1);
	if (owner_cpy == NULL)
	{
		free(name_cpy);
		free(dog);
		return (NULL);
	}

	str_copy(name_cpy, name);
	str_copy(owner_cpy, owner);
	dog->name = name_cpy;
	dog->age = age;
	dog->owner = owner_cpy;

	return (dog);
}
