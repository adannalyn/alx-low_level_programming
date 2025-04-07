#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer
 */
void print_times_table(int n)
{
	int count, times, result = 0, divisor;

	if (n < 0 || n > 15)
		return;
	for (count = 0; count <= n; count++)
	{
		for (times = 0; times <= n; times++)
		{
			result = count * times;
			if (times != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
			}
			divisor = 1;
			while (result / divisor >= 10)
				divisor *= 10;
			while (divisor != 0)
			{
				_putchar('0' + (result / divisor));
				result %= divisor;
				divisor /= 10;
			}
		}
		_putchar('\n');
	}
}
