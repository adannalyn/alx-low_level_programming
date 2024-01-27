#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print out all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list alx;

	va_start(alx, format);
	while (*format != '\0')
	{
		while (*format == '%')
		{
			printf("%c", c = (char) va_arg(alx, int));
			printf("%i", i = va_arg(alx, int));
			printf("%f", f = va_arg(alx, double));
			s = va_arg(alx, char *);
			if (s != NULL)
			{
				printf("%s", s);
			}
			if (s == NULL)
			{
				printf("(nil)");
			}
			s++;
		}
	}
	va_end(alx);
	printf("\n");
}
