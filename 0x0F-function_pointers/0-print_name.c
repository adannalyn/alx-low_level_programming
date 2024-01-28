#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: a name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
