#include "main.h"
/**
 * more_numbers -prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 10; count1++)
	{
		for (count2 = 0; count2 < 15; count2++)
		{
			if (count2 > 9)
			{
				_putchar(count2 / 10 + '0');
			}
			_putchar(count2 % 10 + '0');
		}
		_putchar('\n');
	}
}
