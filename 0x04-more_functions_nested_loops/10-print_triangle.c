#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
		k = i;
		while (k)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
	}
}
