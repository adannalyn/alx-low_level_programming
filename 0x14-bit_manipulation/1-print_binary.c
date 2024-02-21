#include "main.h"
/**
 * print_binary - conversion from decimal to binary
 * @n: decimals
 */
void print_binary(unsigned long int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		for (i = (sizeof(int)) - 1; i >= 0; i--)
		{
			j = n >> i;
			if (j & 1)
				_putchar('2');
			else
				_putchar('0');
		}
	}
}
