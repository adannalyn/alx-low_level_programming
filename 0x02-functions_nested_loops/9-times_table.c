#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int count, times, output = 0;

	for (count = 0; count < 10; count++)
	{
		for (times = 0; times < 10; times++)
		{
			output = count * times;
			if (output == 0)
			{
				_putchar('0' + output);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (output <= 9)
					_putchar(' ');
				if (output >= 10)
					_putchar('0' + (output / 10));
				_putchar('0' + (output % 10));
			}
		}
		_putchar('\n');
	}
}
