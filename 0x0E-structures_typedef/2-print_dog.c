#include "dog.h"

/**
 * print_dog - print detail of dog
 * @d: struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			fprintf(stderr, "Name: (nil)\n");
		}
		else
		{
			fprintf(stdout, "Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			fprintf(stderr, "owner: (nil)\n");
		}
		else
		{
			fprintf(stdout, "Owner: %s\n", d->owner);
		}
	}
}
