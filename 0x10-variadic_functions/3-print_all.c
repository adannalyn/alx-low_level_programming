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
			if ((*format == 'c') || (*format == 'i') || (*format == 'f'))
			{
				c = (char) va_arg(alx, int);
				i = va_arg(alx, int);
				f = va_arg(alx, double);
			}
			s = va_arg(alx, char *);
			if (s != NULL)
			{
				printf("(nil)");
			}
			s++;
		}
	}
	va_end(alx);
	printf("\n");
}
