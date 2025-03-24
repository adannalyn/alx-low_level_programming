#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: 0
 */
void print_number(int num)
{
	int digit, divisor = 1;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
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
		_putchar(digit + '0');
		divisor /= 10;
	}
}
int print_last_digit(int n)
{
	int rem;
	rem = n % 10;
	print_number(rem);
	return (0);
}
