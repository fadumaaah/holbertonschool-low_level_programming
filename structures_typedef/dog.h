#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure represting dog with age, name and owner
 *
 * @name: Pointer that holds dog's name
 * @owner: Pointer that holds dog's owner
 * @age: Value in years of dog's age
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
