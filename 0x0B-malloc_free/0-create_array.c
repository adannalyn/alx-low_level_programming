#include "main.h"
/**
 * *create_array - create an array using malloc
 * @size: size of char
 * @c: character
 * Return: 0
*/
char *create_array(unsigned int size, char c)
{
	char *d = 0;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	d = (char *)malloc((size) * sizeof(char));
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	d[size] = '\0';
	return (d);
}
