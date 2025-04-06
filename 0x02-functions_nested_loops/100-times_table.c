#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: integer
 */
void print_times_table(int n)
{
	int count, times, result = 0;

	if (n < 0 || n > 15)
		return;
	for (count = 0; count <= n; count++)
	{
		for (times = 0; times <= n; times++)
		{
			result = count * times;
			if (times == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else if (result >= 100)
				{
					_putchar('0' + (result / 100));
					_putchar('0' + (result / 10) % 10);
					_putchar('0' + (result % 10));
				}
			}
		}
		_putchar('\n');
	}
}
