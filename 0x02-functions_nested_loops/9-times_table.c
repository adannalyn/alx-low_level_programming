#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int times, count, result;

	for (count = 0; count < 10; count++)
	{
		for (times = 0; times < 10; times++)
		{
			result = count * times;
			if (result > 9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (result <= 9 && result != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			if (result == 0)
			{
				if (times == 0)
				{
					_putchar(result + '0');
					_putchar(',');
					_putchar(' ');
					continue;
				}
				_putchar(' ');
				_putchar(result + '0');
			}
			if (count == 10 || times == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
