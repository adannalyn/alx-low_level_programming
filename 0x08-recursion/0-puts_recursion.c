#include "main.h"
/**
 * _puts_recursion - print a string with puts
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
<<<<<<< HEAD

=======
>>>>>>> 60342d7c543c1c11f2ca8ab7d25d15e58800ccf2
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
<<<<<<< HEAD
	_puts_recursion(s + 1);
=======
	_puts_recursion(++s);
>>>>>>> 60342d7c543c1c11f2ca8ab7d25d15e58800ccf2
}
