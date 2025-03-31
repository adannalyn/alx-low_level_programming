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
	}
	_putchar(remDigit + '0');
	return (remDigit);
}
