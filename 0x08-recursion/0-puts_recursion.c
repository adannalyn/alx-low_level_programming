#include "main.h"
/**
 * _puts_recursion - print a string with puts
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		++s;
	}
	_putchar(_puts_recursion(s));
}
