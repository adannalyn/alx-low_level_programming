#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character \
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int line, space, linen;

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		for (linen = 0; linen < n; linen++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
