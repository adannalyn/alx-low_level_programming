#include "main.h"
/**
  * _strlen - length of a string
  * @s: a char
  * Return: 0
  */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
