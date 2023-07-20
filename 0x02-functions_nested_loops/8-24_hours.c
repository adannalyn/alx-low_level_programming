#include "main.h"
/**
 * jack_bauer - prints the minutes of time
 */
void jack_bauer(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 24; count1++)
	{
		for (count2 = 0; count2 < 60; count2++)
		{
			_putchar(count1 / 10 + '0');
			_putchar(count1 % 10 + '0');
			_putchar(':');
			_putchar(count2 / 10 + '0');
			_putchar(count2 % 10 + '0');
			_putchar('\n');
		}
	}
}
