#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int remDigit;

	remDigit = n % 10;
	if (remDigit < 0)
	{
		remDigit = -remDigit;
		_putchar('0' + remDigit);
	}
	if (remDigit <= 9)
	{
		_putchar('0' + remDigit);
	}
	if (remDigit > 9)
	{
		_putchar('0' + (remDigit / 10));
		_putchar('0' + (remDigit % 10));
	}
	return (0);
}
