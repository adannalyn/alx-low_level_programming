#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: integer
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = n; i < n; i = va_arg(ap, int))
	{
		printf("%d",i);
		if (separator == NULL)
		{
			return;
		}
		else
		{
			printf("%s", separator);
		}
	}
        va_end(ap);
	printf("\n");
}
