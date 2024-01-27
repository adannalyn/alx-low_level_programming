#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print out all
 * @format: string
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *new;
	va_list alx;

	va_start(alx, format);
	while (*format)
	{
		if (*format == 'c')
			printf("%c,", c = va_arg(alx, int));
		else if (*format == 'i')
			printf("%i,", i = va_arg(alx, int));
		else if (*format == 'f')
			printf("%f,", f = va_arg(alx, double));
	}
	while (*format == 's')
	{
		new = va_arg(alx, char *);
		if (new == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s,", new);
		}
	}
	va_end(alx);
	printf("\n");
}
