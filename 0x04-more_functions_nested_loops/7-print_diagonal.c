#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character \
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int line, space;

	n = 10;
	for (line = 0; line < n; line++)
	{
		for (space = 0; space < n;)
		{
			if(line == space)
				_putchar('\\');
			space++;
			_putchar(' ');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
