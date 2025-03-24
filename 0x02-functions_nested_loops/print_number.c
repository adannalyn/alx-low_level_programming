#include "main.h"
/**
 * print_number - print number with _putchar
 * Return: Nothing
 */
void print_number(int num)
{
	int divisor = 1, digit;

	if (num == 0)
		_putchar('0');
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num / divisor >= 10)
		divisor *= 10;
	while (divisor != 0)
	{
		digit = (num / divisor) % 10;
		_putchar('0' + digit);
		divisor /= 10;
	}
}
