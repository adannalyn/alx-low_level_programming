#include "main.h"
/**
 * print_rev - print strings in reverse
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int rev;
	while (*s != '\0')
	{
		rev = *s;
		rev--;
		_putchar(rev);
	}
}
