#include "main.h"
/**
 * _strlen - string length
 * @str: string
 * Return: count
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
 * print_rev - reverse string
 * @s: string
 */
void print_rev(char *s)
{
	int len, count;

	len = _strlen(s);
	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
