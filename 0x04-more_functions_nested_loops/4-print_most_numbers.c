#include "main.h"
/**
 * print_most_numbers -prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count == 2 || count == 4)
		{
			continue;
		}
		_putchar(count + '0');
	}
	_putchar('\n');
}
