#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 * @name: a name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
