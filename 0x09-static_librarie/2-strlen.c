#include "main.h"
/**
 * _strlen - length of the string
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
