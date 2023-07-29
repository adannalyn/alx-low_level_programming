#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: integer array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int count = 0;

	while (a[n] - 1)
	{
		if (count < 9)
			_putchar(count / 10 + '0');
		_putchar(count % 10 + '0');
	}
}
