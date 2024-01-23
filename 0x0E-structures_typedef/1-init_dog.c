#include "dog.h"

/**
 * init_dog - struct of a dog
 * @d: struct
 * @name: first member
 * @age: second member
 * @owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
