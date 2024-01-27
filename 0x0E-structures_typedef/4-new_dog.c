#include <stdio.h>
#include "dog.h"

/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return dest;
}


/**
 * new_dog - create new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	ptr = (dog_t *) malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	free(ptr);
	return (0);
}
