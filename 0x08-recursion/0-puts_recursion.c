#include "main.h"
/**
 * _puts_recursion - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
    while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
