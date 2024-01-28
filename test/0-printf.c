#include "main.h"

/**
 * _printf - custom printf
 * @format: printf format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list alx;
	char c;
	char *s;

	va_start(alx, format);
	while (*format == '%')
	{
		if (*format == 'c')
		{
			c = (char) va_arg(alx, int);
			return (c);
		}
		if (*format == 's')
		{
			s = va_arg(alx, char *);
			if (*s != '\0')
			{
				return (*s);
			}
		}
		if (*format == '%')
		{
			return ('%');
		}
		format++;
	}
	va_end(alx);
	return (0);
}
