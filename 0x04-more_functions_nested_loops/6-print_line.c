#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of lines
 * Return: Always 0.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
