#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: integer array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int digit;

	for (count = n - 1; count > 0; count--)
	{
		digit = a[count];
		if (digit > 9)
		{
			_putchar(digit / 10 + '0');
			_putchar(digit % 10 + '0');

		}
		else
		{
			_putchar(digit + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
