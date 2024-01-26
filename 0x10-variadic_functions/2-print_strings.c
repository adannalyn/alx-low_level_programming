#include "variadic_functions.h"
#include <stdarg.h>
#include <ctype.h>

/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: integer
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list alx;
	unsigned int i;
	char * string;

	va_start(alx, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(alx, char *);
		if (!isdigit(n))
			printf("%s", string);
		else if (n == '\0')
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(alx);
}
