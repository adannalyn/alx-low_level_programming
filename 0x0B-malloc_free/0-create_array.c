#include "main.h"
/**
 * create_array - create array of chars
 * @size: size of char
 * @c: character
 * Return: return 0 if NULL; return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}

	d = malloc(sizeof(char) * size);
	if (d == NULL)
	{
		return (0);
	}
	for (i = 0; i < c[size] != '\0'; i++)
	{
		d[i] = i;
	}
	for (i = 0; i < size; i++)
	{
		_putchar(d[i]);
	}
	free(d);
	return (0);
}
