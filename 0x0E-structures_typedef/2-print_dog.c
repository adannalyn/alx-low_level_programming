#include "dog.h"

/**
 * print_dog - print detail of dog
 * @d: struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	if (d->name == NULL)
	{
		printf("(Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
