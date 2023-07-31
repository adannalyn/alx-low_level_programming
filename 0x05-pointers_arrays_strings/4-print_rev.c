#include "main.h"
/**
 * print_rev - print strings in reverse
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{

	while (s-1)
	{
		_putchar(*s);
		s++;
	}

}
